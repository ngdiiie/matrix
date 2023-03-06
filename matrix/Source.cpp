#include <iostream>
#include <array>
#include <time.h>
// 2. Преобразовать матрицу, умножив элементы каждой строки на значение второго элемента этой строки.
int main()
{
   int y;
  srand(time(NULL)); 
   std::array <std::array <int, 7>, 7> Matrix;
    for(int i = 0; i <= 6; i++){ 
        for(int q = 0; q <= 6; q++){ 
            Matrix[i][q] = rand()%70;
            if(Matrix[i][q] < 10){  
               std::cout << Matrix[i][q] << " " << " ";
            }

            if(Matrix[i][q] > 9){
                std::cout << Matrix[i][q] << " ";
            }
        }
       std::cout << std::endl; 
    }
    std::cout << std::endl << std::endl;
    for(int i = 0; i <= 6; i++){ 
       y = Matrix[i][1];
       for(int q = 0; q <= 6; q++){
             Matrix[i][q] = y * Matrix[i][q];
            }
          }
    for(int i = 0; i <= 6; i++){ 
        for(int q = 0; q <= 6; q++){
            if((Matrix[i][q] < 10000) && (Matrix[i][q] > 999)){ 
                std::cout << Matrix[i][q] << " ";
            }

            if((Matrix[i][q] < 1000) && (Matrix[i][q] > 99)){
                std::cout << Matrix[i][q] << " " << " ";
            }

            if((Matrix[i][q] < 100) && (Matrix[i][q] > 9)){
               std::cout << Matrix[i][q] << " " << " " << " ";
            }

            if(Matrix[i][q] < 10){
               std::cout << Matrix[i][q] << " " << " " << " " << " ";
            }
        }
          std::cout << std::endl; 
        }
    std::cout << std::endl;
    return 0;
}


// 4.В квадратной матрице найти сумму положительных элементов, лежащих на и выше
//главной диагонали и расположенных в чётных столбцах.
#include <iostream>
#include <array>
const int N = 10, M = 10;
int main(){
    std::array <std::array<int, N>, M> arr;

    int sum = 0;    

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            arr[i][j] = rand() % 20 - 10;
            std::cout << arr[i][j] << " ";
            if (cond(arr[i][j], i, j)) sum += arr[i][j];
        }
        std::cout << std::endl;
    }

    std::cout << "sum=" << sum << std::endl;

}
bool cond(int a, int i, int j) {
    return (
        (a > 0) &&
        ((i == j) || (j > i)) &&
        (j % 2 == 0)
        );

}


// 7. Дана матрица. Элементы первой строки — количество осадков в соответствующий
//день, второй строки — сила ветра в этот день.Найти, был ли в эти дни ураган ?
//(ураган — когда самый сильный ветер был в самый дождливый день).
#include <iostream>
#include <array>
const int N = 10, M = 10;
int main() {
    setlocale(LC_ALL, "rus");
    std::array <std::array<int, 10>, 2> arr;
    int max1 = 0, max2 = 0, count = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 10; j++) {
            arr[i][j] = rand() % 10;
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    for (int i = 0; i < 10; i++) {
        if (arr[0][i] > max1) max1 = arr[0][i];
        if (arr[1][i] > max2) max2 = arr[1][i];
    }

    for (int i = 0; i < 10; i++) {
        if ((arr[0][i] == max1) && (arr[1][i] == max2)) count++;
    }
    if (count != 0) std::cout << "Да\n";
    else std::cout << "Нет\n";
}


// 9.b Объявить, реализовать заполнение данными с клавиатуры ИЛИ из файла и вывести
//на экран матрицу, описывающую следующие сущности.Предложите свой вариант.
//Состояние робота на шахматной доске. Робот характеризуется уровнем
//заряда, скоростью движения.
int main(){
    struct Characters{
       int energy;
       int speed;
       int pos;
    };
    int N = 6 ,M = 6;
    srand(time(NULL));
    std::array <std::array <Characters, 8>, 8> Matrix;
      for (int i=0; i < N; i++){
         for (int j=0; j < M; j++){
    Matrix[i][j].energy=rand()%197;
    Matrix[i][j].speed=rand()%187;
       }
    }
    for (int i=0; i<N; i++){
      for (int j=0; j<M; j++){
    std::cout<< "energy:" << Matrix[i][j].energy << ".speed:" << Matrix[i][j].speed << " ";
      }
      std::cout << std::endl;
     }
    return 0;
}


// 10.2 Реализовать вычисление матричных норм из списка выше (только для квадратных
//матриц).
int main()
{
    int y, l, max;
    srand(time(NULL)); 
    std::array <std::array <int, 7>, 7> Matrix;
    for(int i = 0; i <= 6; i++){ 
        for(int q = 0; q <= 6; q++){ 
            Matrix[i][q] = rand()%70; 
            l += Matrix[i][q];
            if(Matrix[i][q] < 10){  
                std::cout << Matrix[i][q] << " " << " ";
            }
            if(Matrix[i][q] > 9){
                std::cout << Matrix[i][q] << " ";
            }
        }
        std::cout << " ...Sum = " << l;
        if(l > max){
            max = l; 
        }
        std::cout << std::endl;
    }
    std::cout << std::endl << std::endl;
    std::cout << "max = " << max << std::endl; 
}
