// 2022.1/25  C++수업
#include <iostream>

using namespace std;

int main()
{
    // // int arrNumber[5][2] = { {0, 0}, {1, 2}, {2, 4}, {3, 6}, {4, 8}, }; 
    // int arrNumber[5][2] = 
    //     { 
    //     {0, 0}, 
    //     {1, 2}, 
    //     {2, 4},
    //     {3, 6},
    //     {4, 8} 
    //     }; 

    // for(int i = 0; i < 5; i++)
    // {
    //     for(int j = 0; j < 2; j++)
    //     {
    //         cout << "a[" << i << "][" << j << "] : " << arrNumber[i][j] << endl;
    //     }
    // }

    // int row = 3, col = 5;

    // int *row_1 = new int[col]; 
    // int *row_2 = new int[col];
    // int *row_3 = new int[col];
    // for(int i = 0; i < col; i++)
    //     row_1[i] = i + 1;
    // for(int i = 0; i < col; i++)
    //     row_2[i] = i + 6;        
    // for(int i = 0; i < col; i++)
    //     row_3[i] = i + 11;
    // int **twod_array = new int * [row];
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         twod_array[i][j] = i + 1;
    //     }
    // }

    int row = 3, col = 5;
    // *twod_array[0] = int *new(row_1);
    int *row_1 = new int[col] {1, 2, 3, 4, 5}; //5개 방을 가지는 포인터가 된다 초기값은 {}
    int *row_2 = new int[col] {6, 7, 8, 9, 10}; //5개 방을 가지는 포인터가 된다 초기값은 {}
    int *row_3 = new int[col] {11, 12, 13, 14, 15}; //5개 방을 가지는 포인터가 된다 초기값은 {}
    // 5개의 배열값을 가진 포인터가 생겼다.

    int **twod_array = new int *[row] {row_1, row_2, row_3}; //주소값을 [row]개 만큼 가져서 {]안의 값을 가지게 때문에 각각 접근할수있게 되는것
    //new에서 주소 값을 반환해 준것이다. 
    
    // int *twod_array[3] {row_1, row_2, row3};
    // 위 식과 똑같다 
    // int *twod_array[3]; //index값 안에도 주소 값을 주는 것이다.
    // twod_array[0] = row_1; 방에다가 주소 값을 준것이다.
    // twod_array[1] = row_1;
    // twod_array[2] = row_1;
    // delete[] twod_array; twod_array delete 하면안된다.

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "a[" << i << "][" << j << "] : " << twod_array[i][j] << endl;
        }
    }

    delete[] row_1;
    delete[] row_2;
    delete[] row_3;
    
    delete[] twod_array;



    return 0;
}

// 22.01.25 C++

// #include <iostream>

// using namespace std;

// int main()
// {
//     // 1st.
//     // int arrNumber[5][2] = { {0, 0}, {1, 2}, {2, 4}, {3, 6}, {4, 8} };

//     // for(int i = 0; i < 5; i++)
//     // {
//     //     for(int j = 0; j < 2; j++)
//     //     {
//     //         cout << "a[" << i << "][" << j << "] : " << arrNumber[i][j] << endl;
//     //     }
//     // }

//     // 2nd.
//     int row = 3, col = 5;

//     int* row_1 = new int[col] {1, 2, 3, 4, 5}; // window
//     int* row_2 = new int[col] {6, 7, 8, 9, 10};
//     int* row_3 = new int[col] {11, 12, 13, 14, 15};
//     int** twod_array = new int* [row] {row_1, row_2, row_3};

//     for(int i = 0; i < row; i++)
//     {
//         for(int j = 0; j < col; j++)
//         {
//             cout << "a[" << i << "][" << j << "] : " << twod_array[i][j] << endl;
//         }
//     }

//     delete[] row_1;
//     delete[] row_2;
//     delete[] row_3;
//     delete[] twod_array;

//     return 0;
// }