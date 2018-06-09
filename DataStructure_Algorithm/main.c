//
//  main.c
//  DataStructure_Algorithm
//
//  Created by xiaopeng on 2018/5/5.
//  Copyright © 2018年 student. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    /*************************************************************************************************/
    /*                                      1.选择排序 O(n^2)                                          */
    /*************************************************************************************************/

    /** 工作原理是每一次从待排序的数据元素中选出最小（或最大）的一个元素，存放在序列的起始位置，直到全部待排序的数据元素排完。 选择排序是不稳定的排序方法（比如序列[5， 5， 3]第一次就将第一个[5]与[3]交换，导致第一个5挪动到第二个5后面）(缺：两层for循环必须全部走完) */
    int selectionSort(void);
    selectionSort();
    
    
    /*************************************************************************************************/
    /*                                      2.插入排序 O(n^2)                                          */
    /*************************************************************************************************/
    
    /** 插入排序的基本思想是：每步将一个待排序的记录，按其关键码值的大小插入前面已经排序的文件中适当位置上，直到全部插入完为止。（优：提前终止循环）*/
    int insertionSort(void);
    insertionSort();
    
    // 插入排序的优化
    int optimizationInsertionSort(void);
    optimizationInsertionSort();
    
    
    /*************************************************************************************************/
    /*                                      3.冒泡排序 O(n^2)                                          */
    /*************************************************************************************************/
    
    /**冒泡排序算法的运作如下：（从后往前）
     1.比较相邻的元素。如果第一个比第二个大，就交换他们两个。
     2.对每一对相邻元素作同样的工作，从开始第一对到结尾的最后一对。在这一点，最后的元素应该会是最大的数。
     3.针对所有的元素重复以上的步骤，除了最后一个。
     4.持续每次对越来越少的元素重复上面的步骤，直到没有任何一对数字需要比较。 */
    int bubbleSort(void);
    bubbleSort();
    
    // 冒泡排序思路二
    int bubbleSortTwo(void);
    bubbleSortTwo();
    
    
    /*************************************************************************************************/
    /*                                      4.希尔排序 O(n^2)                                          */
    /*************************************************************************************************/
    /**希尔排序是插入排序的一种又称“缩小增量排序”，是直接插入排序算法的一种更高效的改进版本。希尔排序是非稳定排序算法。
     希尔排序是把记录按下标的一定增量分组，对每组使用直接插入排序算法排序；随着增量逐渐减少，每组包含的关键词越来越多，当增量减至1时，整个文件恰被分成一组，算法便终止。*/
    // 实质上是一种分组插入方法(ShellSort类内有讲解)
    int shellSort(void);
    shellSort();
    
    
    /*************************************************************************************************/
    /*                                      5.快速排序 O(n^2)                                         */
    /*************************************************************************************************/
    /**基本思想：通过一趟排序将要排序的数据分割成独立的两部分，其中一部分的所有数据都比另外一部分的所有数据都要小，然后再按此方法对这两部分数据分别进行快速排序，整个排序过程可以递归进行，以此达到整个数据变成有序序列。*/
    void quickSort(void);
    quickSort();
    
    
    /*************************************************************************************************/
    /*                                      6.归并排序 O(nlogn)                                       */
    /*************************************************************************************************/
  
    
    /*************************************************************************************************/
    /*                                      7.堆排序                                                  */
    /*************************************************************************************************/
    /**排序过程就是构建最大堆的过程，最大堆：每个结点的值都大于或等于其左右孩子结点的值，堆顶元素是最大值*/
    void heapSort(void);
    heapSort();
    
    
    /*************************************************************************************************/
    /*                                      n-3.有序数组的合并                                         */
    /*************************************************************************************************/
    void mergeList(int a[], int aLen, int b[], int bLen, int result[]);
    int a[] = {1,3,5,7,7};
    int b[] = {2,4,6,8,9};
    int result[10] = {0};
    mergeList(a, 5, b, 5, result);
    
    /*************************************************************************************************/
    /*                                      n-2.取数字指定位数的字                                      */
    /*************************************************************************************************/
    void getIndexNumber(int num, int d);
    getIndexNumber(5211314, 6);
    
    /*************************************************************************************************/
    /*                                      n-1.求数组中最大数的位数                                     */
    /*************************************************************************************************/
    int getMaxNumber(void);
    getMaxNumber();
    
    
    /*************************************************************************************************/
    /*                                      n.找到字符串中第一个不重复的字符                               */
    /*************************************************************************************************/
    int firstNoRepetition(void);
    firstNoRepetition();

    return 0;
}

