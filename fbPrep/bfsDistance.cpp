#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

void addEdge(vector<int> graph[], int u, int v){
    graph[u-1].push_back(v-1);
    graph[v-1].push_back(u-1);
}

void buildGraph(vector<vector<int>> edges, vector<int> graph[]){
    for(int i=0; i<edges.size(); i++){
        addEdge(graph, edges[i][0], edges[i][1]);
    }
}

void getDistance(vector<int> graph[], vector<int>& distance, int s, int n){
    int visited[n] = {0};

    s=s-1;
    queue<int> q;
    q.push(s);
    distance[s]=0;
    visited[s]=1;

    while(!q.empty()){
        s = q.front();
        q.pop();

        for(auto itr: graph[s]){
            if(!visited[itr]){
                q.push(itr);
                distance[itr] = distance[s]+6;
                visited[itr]=1;
            }
        }
    }
}

// Complete the bfs function below.
vector<int> bfs(int n, int m, vector<vector<int>> edges, int s) {
    vector<int> graph[n];
    buildGraph(edges, graph);

    vector<int> distance;
    for(int i=0; i<n; i++)
        distance.push_back(-1);

    getDistance(graph, distance, s, n);

    distance.erase(distance.begin()+s-1);

    return distance;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string nm_temp;
        getline(cin, nm_temp);

        vector<string> nm = split_string(nm_temp);

        int n = stoi(nm[0]);

        int m = stoi(nm[1]);

        vector<vector<int>> edges(m);
        for (int i = 0; i < m; i++) {
            edges[i].resize(2);

            for (int j = 0; j < 2; j++) {
                cin >> edges[i][j];
            }

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        int s;
        cin >> s;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<int> result = bfs(n, m, edges, s);

        for (int i = 0; i < result.size(); i++) {
            fout << result[i];

            if (i != result.size() - 1) {
                fout << " ";
            }
        }

        fout << "\n";
    }

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
