def triplet_sum(N,arr,target):
    check_sum=0
    arr.sort(reverse=False)
    for j in range(0,len(arr)):
        for i in range(j+1,len(arr)):
            for k in range(i+1,len(arr)):
                check_sum = arr[j]+arr[i]+arr[k]
                if check_sum ==target:
                    print(arr[j],arr[i],arr[k])
                else:
                    check_sum = arr[j]+arr[i]
if __name__ == "__main__":
    N = int(input())
    arr = list(map(int,input().rstrip().split()))
    target = int(input())
    triplet_sum(N,arr,target)
'''
157
19 21 2 19 23 17 8 18 29 9 21 20 1 11 27 22 7 7 29 27 12 1 3 21 28 17 8 15 30 17 19 5 27 6 2 18 3 26 21 15 6 17 29 26 16 23 16 29 6 30 24 24 1 13 7 22 17 29 23 16 5 19 25 29 27 23 24 26 22 1 23 10 29 7 12 4 1 24 8 23 4 13 21 13 27 12 13 23 4 4 14 29 29 12 1 24 8 18 6 4 7 18 1 12 1 12 24 30 28 27 21 16 18 14 7 27 9 19 21 9 2 22 10 14 20 4 12 19 9 17 12 8 11 10 10 14 17 20 14 2 20 26 25 19 22 13 18 7 10 11 25 7 8 1 28 14 10 
54
'''