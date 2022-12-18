import java.util.*;



/*
"BUBBLE SORT" is a sorting algorithm that compares two adjacent elements and swaps them until they are in the intended order. Just like the movement of air bubbles in the water that rise up to the surface, each element of the array move to the end in each iteration. Therefore, it is called a bubble sort.
*/

/*
 Sorting an Integer array.
 */

public class BubbleSort{
    public static void main(String[] args) {
        ArrayList<Integer> arr = new ArrayList<>();
        int num;
        System.out.print("Enter the size of the array: ");
        try (Scanner sc = new Scanner(System.in)) {
            num = sc.nextInt();
            int i = num;
            System.out.println("Enter the array elements one by one:");
            while(i!=0){
                arr.add(sc.nextInt());
                i--;
            }
        }

        for(int j = 0; j < arr.size()-1; j++){
            boolean flag  = false;
            
            for(int k = 0; k<arr.size()-1-j; k++){

                if(arr.get(k) > arr.get(k+1)){ //Sorts an integer array in ascending order for sorting in descending order change the symbol '>' --> '<' in the if block
                    int temp = arr.get(k);
                    arr.set(k, arr.get(k+1)); 
                    arr.set(k+1,temp);
                    flag = true;
                }

            }

            if(!flag) break;
        }
        System.out.println("The elements in sorted order!");
        for(int elem:arr){
            System.out.println(elem);

        }
    }
}





/*
 Sorting a String array.
 */
/* 
import java.util.*;
public class BubbleSort{
    public static void main(String[] args) {
        ArrayList<String> arr = new ArrayList<>();
        int num;
        System.out.print("Enter the size of the array: ");
        try (Scanner sc = new Scanner(System.in)) {
            num = sc.nextInt();
            int i = num;
            System.out.println("Enter the array elements one by one:");
            while(i!=0){
                arr.add(sc.next());
                i--;
            }
        }

        for(int j = 0;j < arr.size()-1;j++){
            boolean flag  = false;
            
            for(int k = 0; k<arr.size()-1-j;k++){

                if((arr.get(k).toLowerCase()).compareTo((arr.get(k+1).toLowerCase()))>0){ //Sorts a String array in lexicographical order
                    String temp = arr.get(k);
                    arr.set(k, arr.get(k+1)); 
                    arr.set(k+1,temp);
                    flag = true;
                }

            }

            if(!flag) break;
        }
        System.out.println("The elements in sorted order!");
        for(String elem:arr){
            System.out.println(elem);

        }
    }
}



// Time Complexity: O(N^2)
// Auxiliary Space: O(1) 

//Bubble sort is a stable algorithm


/* A sorting algorithm is said to be stable if two objects with equal keys appear in the same order in sorted output as they appear in the input array to be sorted. This means a sorting algorithm is called stable if two identical elements do not change the order during the process of sorting. */ 