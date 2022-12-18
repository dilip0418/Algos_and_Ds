import java.util.*;


/*

Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.

Characteristics of Insertion Sort:
--> This algorithm is one of the simplest algorithm with simple implementation
--> Basically, Insertion sort is efficient for small data values
--> Insertion sort is adaptive in nature, i.e. it is appropriate for data sets which are already partially sorted.
 

Insertion Sort Algorithm 
To sort an array of size N in ascending order: 

--> Iterate from arr[1] to arr[N] over the array. 
--> Compare the current element (key) to its predecessor. 
--> If the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.

*/



public class InsertionSort {
    public static void main(String[] args) {
        int num;
        System.out.print("Enter the number of elements you wnat: ");
        ArrayList<Integer> arr = new ArrayList<>();
        try (Scanner sc = new Scanner(System.in)){
            num = sc.nextInt();
            int i = num;
            System.out.println("Enter the array elements one by one:");
            while (i != 0){
                arr.add(sc.nextInt());
                i--;
            }
        }

        // MAIN LOGIC
        for(int i = 1; i<arr.size();i++){

            int temp = arr.get(i);
            int j = i;
            
            while(j>0 && arr.get(j-1) > temp){
                arr.set(j,arr.get(j-1));
                j--;
            } 
            arr.set(j, temp);
        }
        
        System.out.println("The elements in the sorted order are as follows: ");
        for(int elem:arr){
            System.out.print(elem+" ");
        } 

    }
}


/* public class InsertionSort {
    public static void main(String[] args) {
        int num;
        System.out.print("Enter the number of elements you wnat: ");
        ArrayList<String> arr = new ArrayList<>();
        try (Scanner sc = new Scanner(System.in)){
            num = sc.nextInt();
            int i = num;
            System.out.println("Enter the array elements one by one:");
            while (i != 0){
                arr.add(sc.next());
                i--;
            }
        }
        for(int i = 1; i<arr.size();i++){
            String temp = arr.get(i);
            int j = i;
            while(j>0 && arr.get(j-1).compareTo(temp)>0){
                arr.set(j,arr.get(j-1));
                j--;
            } 
            arr.set(j, temp);
        }
        for(String elem:arr){
            System.out.print(elem+" ");
        } 

    }
} */




/* 
Time Complexity: O(N^2)
Auxiliary Space: O(1) 
Insertion Sort is a Stable Algorithm 
*/