// import java.util.*;
// public class BinarySearch {
//     public static int binarySearch(int arr[],int key){
//         int start = 0;
//         int end = arr.length-1;
        
//         while(start<=end){
//             int mid = (start + end)/2;
//             if(arr[mid]==key){
//                 return mid;
//             }else if(arr[mid]>key){
//                 end = mid-1;
//             }else if(arr[mid]<key){
//                 start = mid+1;
//             }
//         }
//         return -1;
//     }
//     public static void main(String args[]){
//         Scanner sc = new Scanner(System.in);
//         int arr[]={1,2,3,4,5,6};
//         System.out.println("Enter the value of key: ");
//         int key= sc.nextInt();
//         int result = binarySearch(arr,key);
//         if(result!=0){
//             System.out.println("The key found at index: "+result);
//         }else{
//             System.out.println("The key not found ");
//         }

//     }
// }
