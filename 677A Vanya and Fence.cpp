    #include <iostream>
     
    int main() {
        // Write C++ code here
        int n, h, a, width=0;
        scanf("%i%i", &n,&h);
        for (int i=0; i<n; i++){
            scanf("%i", &a);
            if (a>h) width+=2;
            else width++;
        }
        printf("%i",width);
        return 0;
    }

