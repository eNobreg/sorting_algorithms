<!DOCTYPE html>
<html>
<body>
<h2>README For The sorting_algorithms Repo</h2>
<h4>Contributors: Ezra Nobrega and Michelle Giraldo</h4>
This project was written in the C Programming Language with the objective of understanding  different sorting algorithms and how their time complexity may differ.
<br /><br />
Each sorting algorithm had a corresponding file that contained the best, average, and worst case of the sorting algorithm's time complexity.
<br /><br />
<table style="width:100%">
<tr>
<th>File Name</th>
<th>Description</th>
</tr>
<tr>
<td>0-bubble_sort.c<br /><br /><i>Corresponding File:<br /></i>0-O</td>
<td>This file contains the Bubble Sort algorithm. This method of sorting involves finding the largest item and moving it to the end of the array. The algorithm returns to the beginning and repeats this action multiple times until everything is sorted.</td>
</tr>
<tr>
<td>1-insertion_sort_list.c<br /><br /><i>Corresponding File:<br /></i>1-O</td>
<td>This file contains the Insertion Sort algorithm. This method of sorting involves creating a sorted list right off the bat and inserting a node at a time into this list. The way it does this is by moving through the list one at a time and organizing it as it goes.</td>
</tr>
<tr>
<td>2-selection_sort.c<br /><br /><i>Corresponding File:<br /></i>2-O</td>
<td>This file contains the Selection Sort algorithm. This method of sorting is similar to Insertion Sort as it basically sorts as it goes. The way it differs from Insertion sort is also the reason it's slower. Instead of grabbing the next item in the list and placing it within the sorted side, Selection sort looks for the smallest item from the unsorted side of the list to place within the sorted side.</td>
</tr>
<tr>
<td>3-quick_sort.c<br /><br /><i>Corresponding File:<br /></i>3-O</td>
<td>This file contains the Quick Sort algorithm. This method of sorting is described as divide-and-conquer. It chooses a pivot point that basically splits the array into one section containing what's smaller and the other with what's bigger. Then the pivot point enters one of those sections to do the same thing, which causes Quick Sort to organize the array through sections.</td>
</tr>
<tr>
<td>100-shell_sort.c<br /><br /><i>No Corresponding File<br /></i></td>
<td>This file contains the Shell Sort algorithm. This method of sorting is quiet interesting as instead of sorting each element by swapping with the point next to it, it will search through the array to swap with the appropriate value. After that it searches the next point to swap with the last point that was moved and continues from there.</td>
</tr>
<tr>
<td>101-cocktail_sort_list.c<br /><br /><i>Corresponding File:<br /></i>101-O</td>
<td>This file contains the Cocktail Shaker Sort algorithm. This method of sorting is seen as an extention of Bubble sort. The way this works is by moving through the list, bringing the biggest element of the list to the end. It then moves forward, bringing the smallest element to the front. It does this repeatedly, making it go faster as it closes the gap and stops in the middle once all is sorted.</td>
</tr>
<tr>
<td>103-merge_sort.c<br /><br /><i>Corresponding File:<br /></i>103-O</td>
<td>This file contains the Merge Sort algorithm. This method of sorting is also seen as a type of divide-and-conquer algorithm as it divides the array into small, single parts. Once it's divided it then starts to put the array back together but in order so once everything is placed into one array again, it's now sorted.</td>
</tr>
<tr>
<td>107-quick_sort_hoare.c<br /><br /><i>Corresponding File:<br /></i>107-O</td>
<td>This file contains the Quick Sort algorithm, but of the Hoare partition scheme. This method of sorting is quite similar to regular Quick Sort as it is of a certain partition scheme. The Hoare parition scheme differs from Quick Sort's regular one as Hoare uses two indices at the ends of the array. These points move towards each other,swapping based upon the values at these positions.</td>
</tr>