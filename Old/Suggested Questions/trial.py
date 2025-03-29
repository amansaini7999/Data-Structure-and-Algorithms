import pandas as pd

def check(n, x, g, v):
    temp = []

    for i in range(n):
        temp.append({"key" : g[i], "value" : v[i]})

    df = pd.DataFrame(temp)
    df = df.sort_values(by=['value', 'key'], ascending=False)
    df = df.reset_index(drop=True)

    sum=0
    for i in range(len(df)):
        if int(df["key"][i])<=x:
            sum+=int(df["value"][i])
            x-=int(df["key"][i])

    return sum;

if __name__ == "__main__":
    n = int(input())
    x = int(input())

    g = []
    v =[]

    for i in range(n):
        z = int(input())
        g.append(z)

    for i in range(n):
        z = int(input())
        v.append(z)

    print(check(n, x, g, v))
