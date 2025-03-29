def solve(lowestChannel,highestChannel,blockedChannels,channelSeq):
    total_channels=[i for i in range(lowestChannel,highestChannel+1) if i not in blockedChannels]
    length=len(total_channels)
    pushes=len(str(channelSeq[0]))
    loc=total_channels.index(channelSeq[0])
    back=None
    for i in range(1,len(channelSeq)):
        curr=total_channels.index(channelSeq[i])
        button_press=len(str(channelSeq[i]))
        direct_press=abs(loc-curr)
        indirect_press=length-abs(loc-curr)

        if i>1 and channelSeq[i]==channelSeq[i-2]:
            pushes+=min(button_press,direct_press,indirect_press,1)
        else:
            pushes+=min(button_press,direct_press,indirect_press)
        loc=curr
    return pushes

lowestChannel = 1
highestChannel = 20
blockedChannels = [18, 19]
channelSeq = [15, 14, 17, 1, 17]

print(solve(lowestChannel, highestChannel, blockedChannels, channelSeq))
