def insert(heap, num):      #heap에 num을 넣을 때의 최대힙 구현 방식
    heap.append(num)
    i = len(heap) - 1
    while i>1:      #힙구조를 위해, leaf에서부터 root까지 부모노드와 비교해가며 올라간다
        if heap[i] > heap[i//2]:        #이진트리에서 i번째 노드의 부모 노드는 i//2번째의다
            temp = heap[i]
            heap[i] = heap[i//2]
            heap[i//2] = temp
            i = i//2
        else:
            break

#뺄 때의 구현 방식
#마지막 노드의 값을 1번노드와 바꿔줌, 자식들과 비교하며 내려감
#자식이 둘 이면, 더 큰 자식과 바꿈
def remove(heap):
    max = heap[1]       #바나환값 미리 받아놓기
    temp = heap.pop()   #????

    parent = 1
    child = 2

    while child <= len(heap) - 1:
        if heap[child] < heap[child+1]:
            child+=1
        if heap[child] <= temp:     #temp가 들어갈 위치가 확정되면
            break
        heap[parent] = heap[child]
        parent = child
        child *= 2
    if len(heap) != 1:      #!=1인 이유??
        heap[parent] = temp
    return max

heap = [0]      #0인덱스에 0 넣어놓기(최소,계산 편의성?)
