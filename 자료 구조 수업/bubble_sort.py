#옆에 있는 값과 비교해서 더 작은 값을 앞으로 보내기
array = [10,2,3,4,5,7,6,1,9,8]

for i in range(1, 10):
    i = 10-i
    i =int(i)
    for j in range(0, i):
        j =int(j)
        if array[j] > array[j+1]:
            temp = array[j]
            array[j] = array[j+1]
            array[j+1] = temp
print(array)

#temp를 이용한 스와핑 과정이 시행횟부마다 실해되므로 실제 시행에서 선택정렬보다 오래걸린다
#시간복잡도는O(n^2)으로 같음