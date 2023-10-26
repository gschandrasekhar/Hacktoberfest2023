def mergesort(list1):
  if len(list1) > 1:
  
    # To divide List
    mid = len(list1)//2
    left_list = list1[:mid]
    right_list = list1[mid:]
    mergesort(left_list)
    mergesort(right_list)
  
    # To Merge Lists
    i,j,k = 0,0,0
    while i < len(left_list) and j < len(right_list):
      if left_list[i] < right_list[j]:
        list1[k] = left_list[i]
        i += 1
        k += 1
      else:
        list1[k] = right_list[j]
        j += 1
        k += 1
  
    # to check left over on left list
    while i < len(left_list):
      list1[k] = left_list[i]
      i += 1
      k += 1
  
    # to check left over on right list
    while j < len(right_list):
      list1[k] = right_list[j]
      j += 1
      k += 1

list1 = [9,6,3,2,7,1]
mergesort(list1)
print(list1)

