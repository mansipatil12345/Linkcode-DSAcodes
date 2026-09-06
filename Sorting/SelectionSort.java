public class SelectionSort {
    public static void selectionsort(int arr[],int len){
         for(int i=0;i<len;i++){
            int minidx = i;
            for(int j=i+1;j<len;j++){
                if(arr[i]<minidx){
                    minidx=j;
                }
            }
            int temp = arr[i];
            arr[i]= arr[minidx];
            arr[minidx]=temp;
         }
    }

    public static void print(int arr[]){
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
    }
    public static void main(String[] args) {
        int arr[]={45,6,7,8,9};
        int len = 5;
        selectionsort(arr, len);
        print(arr);
    }
}
