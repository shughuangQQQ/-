void quickSort(int* a, int left, int right) {
    if (right <= left)
        return;


    int p, q, i, j;
    int pivot;
    i = p = left;
    j = q = right - 1;
   
    pivot = a[right];
    while (true) {
     
        while (i < right && a[i] <= pivot) {
          
            if (a[i] == pivot) {
                swap(a, i, p);
                p++;
            }
            i++;
        }
      
        while (left <= j && a[j] >= pivot) {
         
            if (a[j] == pivot) {
                swap(a, j, q);
                q--;
            }
            j--;
        }
      
        if (i >= j)
            break;

      
        swap(a, i, j);
        i++;
        j--;
    }
  
    i--;
    p--;
    while (p >= left) {
        swap(a, i, p);
        i--;
        p--;
    }
 
    j++;
    q++;
    while (q <= right) {
        swap(a, j, q);
        j++;
        q++;
    }


    quickSort(a, left, i);
    quickSort(a, j, right);
}

 void quick(int* a) {
    if (a.length > 0) {
        quickSort(a, 0, a.length - 1);
    }
}

 void swap(int* arr, int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
