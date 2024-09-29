k=int(input('k value:'))
n=int(input('size of array:'))
arr=[]
for i in range(n):
  arr.append(int(input()))
arr=list(set(arr))
arr.sort()
l=len(arr)
print(arr)
if k<n:
    small=arr[k-1]
    big=arr[l-k]
    print(k,"-- smallest number in the array is",small,k,"-- largest number is",big)
else:
    print("the lemgth of the array is smaller than the k value")
