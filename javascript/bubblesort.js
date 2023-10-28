function bubble_Sort(arr) {
  const n = arr.length;

  for (let i = 0; i < n - 1; i++) {
    for (let j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        const temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  return arr;
}

const unsorted_Array = [64, 34, 25, 12, 22, 11, 90];
const sorted_Array = bubble_Sort(unsorted_Array);
console.log("Sorted Array:", sorted_Array);
