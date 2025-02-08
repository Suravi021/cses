n, m, k = map(int, input().strip().split())
desired = list(map(int, input().strip().split()))
actual = list(map(int, input().strip().split()))
alloted = 0
n = n-1
desired.sort()
actual.sort()

for flat in desired:
    if alloted == m:
        break
    for i in range(0, len(actual)):
        if(actual[i]-k <= flat <= actual[i]+k):
            alloted = alloted+1
            actual.pop(i)
            break
print(alloted)