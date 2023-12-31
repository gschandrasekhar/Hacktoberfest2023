import java.util.*;

public class CountSort {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int arr[] = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = input.nextInt();
        }
        System.out.println("Array Before Sorting :-");
        for(int i = 0; i<n; i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();

        countingSort(arr);

        System.out.println("Array After Sorting :-");
        for(int i = 0; i<n; i++){
            System.out.print(arr[i]+" ");
        }

    }

    public static void countingSort(int[] arr) {
        if (arr == null || arr.length <= 1) {
            return;
        }

        // Find the maximum value in the array
        int max = arr[0];
        for (int num : arr) {
            if (num > max) {
                max = num;
            }
        }

        // Create a counting array to store the count of each element
        int[] count = new int[max + 1];

        // Count the occurrences of each element in the input array
        for (int num : arr) {
            count[num]++;
        }

        // Reconstruct the sorted array
        int index = 0;
        for (int i = 0; i < count.length; i++) {
            while (count[i] > 0) {
                arr[index] = i;
                index++;
                count[i]--;
            }
        }
    }
}
