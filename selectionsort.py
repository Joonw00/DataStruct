#계속 가장 작은 것을 선택해 제일 앞으로 보내기
array = input()

for i in range(0, 10):
    min = 9999
    i = int(i)
    for j in range(i, 10):
        if min>array[j]:
            min = array[j]
            index = j
    temp = array[i]
    array[i] = array[index]
    array[index] = temp #스와핑
for i in range(0,10):
    i = int(i)
    print(array[i])

#시간복잡도는 O(n^2)이다
#bigo표기법->특정한 알고리즘의 수행시간을 가장 간략하게 표현