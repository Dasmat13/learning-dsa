#include<bits/stdc++.h> // including the bits/stdc++.h library for standard input/output and other functions
using namespace std; // using the standard namespace for convenience

// blank line for readability
void pattern1(int n){ // defining a function pattern1 that takes an integer n as input
    for (int i = 0; i < n; i++){ // looping through each row
        for(int j = 0; j< n; j++){ // looping through each column
            cout << "* "; // printing a star followed by a space
        }
        cout << endl; // moving to the next line
    }
}
// blank line for readability
void pattern2(int n){ // defining a function pattern2 that takes an integer n as input
    for (int i = 1; i <=n; i++){ // looping through each row
        for(int j = 1; j<=i; j++){ // looping through each column
            cout << "* "; // printing a star followed by a space
        }
        cout << endl; // moving to the next line
    }
}
// blank line for readability
void pattern3(int n){ // defining a function pattern3 that takes an integer n as input
    for (int i = 1; i <=n; i++){ // looping through each row
        for(int j = 1; j<=i; j++){ // looping through each column
            cout << j; // printing the column number
        }
        cout << endl; // moving to the next line
    }
}
// blank line for readability
void pattern4(int n){ // defining a function pattern4 that takes an integer n as input
    for (int i = 1; i <=n; i++){ // looping through each row
        for(int j = 1; j<=i; j++){ // looping through each column
            cout << i; // printing the row number
        }
        cout << endl; // moving to the next line
    }
}
// blank line for readability
void pattern5(int n){ // defining a function pattern5 that takes an integer n as input
    for (int i = 1; i <=n; i++){ // looping through each row
        for(int j = 0; j<n-i+1; j++){ // looping through each column
            cout << "* "; // printing a star followed by a space
        }
        cout << endl; // moving to the next line
    }
}
// blank line for readability
void pattern6(int n){ // defining a function pattern6 that takes an integer n as input
    for (int i = 1; i <=n; i++){ // looping through each row
        for(int j = 1; j<=n-i+1; j++){ // looping through each column
            cout << j << " "; // printing the column number followed by a space
        }
        cout << endl; // moving to the next line
    }
}
// blank line for readability
void pattern7(int n){ // defining a function pattern7 that takes an integer n as input
    for(int i = 0; i<n ; i++){ // looping through each row
        for(int j = 0 ; j< n-i-1; j++){ // looping through each space before the pattern
            cout << " "; // printing a space
        }
        for(int j = 0; j< 2*i+1;j++){ // looping through each column of the pattern
            cout << "*"; // printing a star
        }
        // for(int j = 0; j< n-i-1;j++){ // this loop is commented out, it would print spaces after the pattern
        //     cout << " ";
        // }
        cout << endl; // moving to the next line
    }
}
// blank line for readability
void pattern8(int n){ // defining a function pattern8 that takes an integer n as input
    for(int i = 0; i<n; i++){ // looping through each row
        for(int j = 0 ; j<i; j++){ // looping through each space before the pattern
            cout << " "; // printing a space
        }
        for(int j = 0; j< 2*n-(2*i+1); j++){ // looping through each column of the pattern
            cout << "*"; // printing a star
        }
        cout << endl; // moving to the next line
    }
}
// blank line for readability
void pattern9(int n){ // defining a function pattern9 that takes an integer n as input
  for(int i = 0; i< n; i++){ // looping through the upper half of the pattern
    for(int j = 0; j < n-i-1; j++){ // looping through each space before the pattern
        cout << " "; // printing a space
    }
    for(int j = 0; j < 2*i+1; j++){ // looping through each column of the pattern
        cout << "*"; // printing a star
    }
    // for(int j = 0; j < n-i-1; j++){ // this loop is commented out, it would print spaces after the pattern
    //     cout << " ";
    // }
    cout << endl; // moving to the next line
  } 
  for(int i = 0 ; i< n ; i++){ // looping through the lower half of the pattern
     for(int j = 0; j < i; j++){ // looping through each space before the pattern
        cout << " "; // printing a space
    }
    for(int j = 0; j < 2*n-(2*i+1); j++){ // looping through each column of the pattern
        cout<< "*"; // printing a star
    }
    //  for(int j = 0; j < i; j++){ // this loop is commented out, it would print spaces after the pattern
    //     cout << " ";
    // }
    cout << endl; // moving to the next line
  }
}
// blank line for readability
void pattern10(int n){ // defining a function pattern10 that takes an integer n as input
  for(int i = 1; i<= n; i++){ // looping through the upper half of the pattern
    for(int j = 1; j <= i; j++){ // looping through each column of the pattern
        cout << "* "; // printing a star followed by a space
    }
    // for(int j = 0; j < 2*i+1; j++){ // this loop is commented out, it would print stars
    //     cout << "*";
    // }
    // for(int j = 0; j < n-i-1; j++){ // this loop is commented out, it would print spaces
    //     cout << " ";
    // }
    cout << endl; // moving to the next line
  } 
  for(int i = 1 ; i<=n ; i++){ // looping through the lower half of the pattern
    //  for(int j = 0; j < i; j++){ // this loop is commented out, it would print spaces
    //     cout << " ";
    // }
    for(int j = 1; j <+ n-i+1; j++){ // looping through each column of the pattern
        cout<< "* "; // printing a star followed by a space
    }
    //  for(int j = 0; j < i; j++){ // this loop is commented out, it would print spaces
    //     cout << " ";
    // }
    cout << endl; // moving to the next line
  }
}
// blank line for readability
void pattern11(int n){ // defining a function pattern11 that takes an integer n as input
    int start = 1; // initializing a variable start to 1
    for(int i = 0; i<n ; i++){ // looping through each row
        if(i%2==0){ // checking if the row number is even
            start = 1; // setting start to 1 for even rows
        }
        else { // if the row number is odd
            start = 0; // setting start to 0 for odd rows
        }
        for(int j= 0; j<=i;j++){ // looping through each column
            cout << start <<  " "; // printing the value of start followed by a space
            //here we have to flip
            start = 1 - start; // flipping the value of start
        }
        cout << endl; // moving to the next line

    }
}
// blank line for readability
void pattern12(int n){ // defining a function pattern12 that takes an integer n as input
    for(int i  =1;i<=n;i++){ // looping through each row
        //numbers
        for(int j = 1; j<=i;j++){ // looping through the first half of the pattern
            cout << j; // printing the column number
        }
        //spaces
        for(int j = 1 ; j <= 2*n-(i*2); j++){ // looping through the spaces in the middle
            cout << " "; // printing a space
        }
        //numbers
        for(int j = i; j>=1;j--){ // looping through the second half of the pattern
            cout << j; // printing the column number
        }
        cout << endl; // moving to the next line
    }
}
// blank line for readability
void pattern13(int n){ // defining a function pattern13 that takes an integer n as input
    int num =1; // initializing a variable num to 1
    for(int i =1; i <= n;i++){ // looping through each row
        for(int j = 1; j<=i; j++){ // looping through each column
            cout << num << " "; // printing the value of num followed by a space
              num = num +1; // incrementing num by 1
        }
        cout << endl; // moving to the next line
      
    }
}
// blank line for readability
void pattern14(int n){ // defining a function pattern14 that takes an integer n as input
    for(int i =0;i<=n;i++){ // looping through each row
        for(char ch = 'A'; ch <= 'A'+  i;ch++){ // looping through each column
            cout << ch << " "; // printing the character followed by a space
        }
        cout << endl; // moving to the next line
    }
}
// blank line for readability
void pattern15(int n){ // defining a function pattern15 that takes an integer n as input
    for(int i = 0; i<= n ; i++){ // looping through each row
        for(char ch = 'A'; ch <= 'A' +n-i;ch++ ){ // looping through each column
            cout << ch << " "; // printing the character followed by a space
        }
        cout << endl; // moving to the next line
    }
}
// blank line for readability
void pattern16(int n){ // defining a function pattern16 that takes an integer n as input
    // for(char ac = 0; ac <= n; ac++){ // this loop is commented out, it would loop through each row
    //     for(char ch = 'A'; ch <= 'A'+ac;ch++){ // this loop is commented out, it would loop through each column
    //         cout << ac <<" "; // this line is commented out, it would print the row number followed by a space
    //     }
    //     cout << endl; // this line is commented out, it would move to the next line
    // }
    //my mistake 
    for(int i =0; i<=n;i++){ // looping through each row
        char ch = 'A' +i; // initializing a character variable ch to 'A' plus the row number
        for(int j = 0; j<= i;j++){ // looping through each column
            cout << ch << " "; // printing the character followed by a space
        }
        cout << endl; // moving to the next line
    }
}   
// blank line for readability
void pattern17(int n){ // defining a function pattern17 that takes an integer n as input
    for(int i = 0; i<=n;i++){ // looping through each row
        //space
        for(int j = 0;j<= n-i-1;j++){ // looping through each space before the pattern
            cout << " "; // printing a space
        }
        //char
        char ch = 'A'; // initializing a character variable ch to 'A'
        int breakpoint = (2*i+1)/2; // calculating the middle point of the pattern
        for(int j = 1; j <= 2*i+1; j++ ){ // looping through each column of the pattern
            cout << ch ; // printing the character
            if(j <= breakpoint) ch++; // incrementing ch if we are in the first half of the pattern
            else ch--; // decrementing ch if we are in the second half of the pattern
        }
        cout << endl; // moving to the next line
    }
}
// blank line for readability
int main(){ // defining the main function

        int n; // declaring an integer variable n
        cin >> n; // reading the value of n from the input
        pattern17(n); // calling the pattern17 function with n as argument
        cout << endl; // moving to the next line
    } // end of the main function