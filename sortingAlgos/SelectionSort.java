import java.util.*;


/*

 The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from the unsorted part and putting it at the beginning. 

The algorithm maintains two subarrays in a given array.

-->The subarray which already sorted. 
-->The remaining subarray was unsorted.
-->In every iteration of the selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray. 

 */


public class SelectionSort {
    public static void main(String[] args) {
        int num;
        System.out.print("Enter the number of elements you wnat: ");
        ArrayList<Integer> arr = new ArrayList<Integer>();
        try (Scanner sc = new Scanner(System.in)){
            num = sc.nextInt();
            int i = num;
            System.out.println("Enter the array elements one by one:");
            while (i != 0){
                arr.add(sc.nextInt());
                i--;
            }
        }

        //MAIN LOGIC
        for(int i = 0; i<arr.size();i++){
            int min = i; //This is to compare the element in the sorted list with the elements in the unsorted list
            for(int j = i+1; j<arr.size(); j++){
    
                // Here it compares the element in the sorted list with the elements in the unsorted list and serches for the elements which is the smaller then all the others in the unsorted list and swaps both of them.

                if(arr.get(j)<arr.get(min)) min = j; 

            }

            //Herein we swap the elemets 
            
            int temp = arr.get(i);
            arr.set(i,arr.get(min));
            arr.set(min,temp);
        }


        System.out.println("The elements in the sorted array:");
        for(var elem:arr){
            System.out.println(elem);
        }
    }    
}



/*
Selection for sorting the String array in lexicographical order. 
*/
/* 
public class SelectionSort {
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
        for(int i = 0; i<arr.size();i++){
            int min = i; //This is to compare the element in the sorted list with the elements in the unsorted list
            for(int j = i+1;j<arr.size();j++){
                if((arr.get(j).toLowerCase()).compareTo((arr.get(min).toLowerCase()))<0) min = j; /*Here it compares the element in the sorted list with the elements in the unsorted list and serches for the elements which is the smaller then all the others in the unsorted list and swaps both of them.
            }

            /* Herein we swap the elemets 
            String temp = arr.get(i);
            arr.set(i,arr.get(min));
            arr.set(min,temp);
        }
        System.out.println("The elements in the sorted array:");
        for(var elem:arr){
            System.out.println(elem);
        }
    }    
}*/


// Time Complexity:O(N^2)
// Auxiliary Space: O(1)

//Selection Sort is an unstable algorithm */