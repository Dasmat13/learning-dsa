// including all standard C++ libraries (iostream, vector, etc.)
#include<bits/stdc++.h>
// using standard namespace to avoid writing std:: before cout, cin, etc.
using namespace std ;

// defining a function to count occurrences of a number in an array
int f(int number , int a[],int n){
    // initializing a variable to store the count of occurrences (initially 0)
    int cnt = 0;
    // loop to iterate through the entire array
    for(int i =0 ; i< n; i++){
        // checking if the current element is equal to the given number
        if(a[i] == number){
            // if match found, increase the count by 1
            cnt = cnt + 1;
        }
        // blank line for readability
    }
    // returning the total count after checking all elements
    return cnt;
}

// main function where program execution begins
int main(){
    // declaring a variable to store the size of the array
    int n;
    // taking input for the size of the array from the user
    cin >> n;
    // declaring an array of size n to store elements
    int arr[n];

    // loop to take input of array elements from the user
    for(int i = 0 ; i< n; i++){
        // storing each element in the array
        cin >> arr[i];
    }

    // declaring a variable to store the number we want to search
    int number;
    // taking input for the number to search from the user
    cin >> number;
    // calling function f() and passing the number, array, and size of array
    int result = f(number, arr,n);
    // printing how many times the number appears
    cout << "the number " << number << " occurs: " << result << endl;

    // program ends successfully
    return 0;


}

// blank line for readability
// including all standard C++ libraries (iostream, vector, etc.) - duplicate and unnecessary
#include<bits/stdc++.h>   
// using standard namespace to avoid writing std:: before cout, cin, etc. - duplicate and unnecessary
using namespace std;      
// blank line for readability
// ================= FUNCTION DEFINITION =================
// blank line for readability
// Function to count how many times 'number' appears in array
int f(int number , int a[], int n){
    // initializing a variable to store the count of occurrences (initially 0)
    int cnt = 0;             
    // loop to iterate through the entire array
    for(int i = 0; i < n; i++){
        // checking if the current element is equal to the given number
        if(a[i] == number){
            // if match found, increase the count by 1
            cnt = cnt + 1;    
        }
        // blank line for readability
    }
    // returning the total count after checking all elements
    return cnt;   
}

// blank line for readability
// ================= MAIN FUNCTION =================
// blank line for readability
int main(){
    // declaring a variable to store the size of the array
    int n;             
    // taking input for the size of the array from the user
    cin >> n;          
    // declaring an array of size n to store elements
    int arr[n];         
    // loop to take input of array elements from the user
    for(int i = 0; i < n; i++){
        // storing each element in the array
        cin >> arr[i];  
    }
    // declaring a variable to store the number we want to search
    int number;         
    // taking input for the number to search from the user
    cin >> number;     
    // calling function f() and passing the number, array, and size of array
    int result = f(number, arr, n);
    // printing how many times the number appears
    cout << "the number " << number 
         << " occurs: " << result << endl;
    // program ends successfully
    return 0;   
}