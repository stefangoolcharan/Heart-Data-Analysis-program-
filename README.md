# Heart-Data-Analysis-program-
This program written in C++ reads heart rate data from a file and conducts analytics based on the data. 
------------------------------------------------------------------------------------------------------------
The program “Heart Rate Analysis Program” is built and designed to perform calculations and analysis on heart rate data obtained from a medical practitioner.  The data examined by the program are resting heart rate readings from an age group between 18 – 25 years and of only men. Once read in by the program, it can perform calculations, display readings, display ranges where heart rates occurred etc.
Please note that the heart rates are read in the order of the patients. 
Example: Patient 0 has a heart rate of 49bpm.

The menu consists of ten options. Below is what each option does as well as its state of functionality.   
Option 1 – This option once chosen displays the highest, lowest and average heart rate from the data provided. Currently its functionality is not 100% as it displays the values however it is not entirely accurate. 

Option 2 – When selected, the user is shown all the readings as well as the patient number to the respective heart rate. This options functions 100%.

Option 3 – This option when selected gives the user two more options to choose either a less or more than option. A number must be entered, after which the program will display all the heart rates that either more or less than the number, as well as which patient the heart rate belongs too. This options functions 100%.

Option 4 – This option displays the patients whose heart rates are in a danger zone. There are two ranges for this, being a ‘Below Average Heart Rate’ which is a resting heart rate between 74 and 81 beats per minute or (bpm) and ‘Poor Heart Rate’ which occurs above 82 bpm. Readings which are under the ‘Poor Heart Rate’ section are labelled for attention ASAP as this can be due to a heart problem such as Tachycardia. This options functions 100%.

Option 5- With this option the user is able to view the number of occurrences the heart rates occurred within a specific range as well as which patient belonged to a heart rate. Below are the respective ranges as well as their beats per minute. 

Range	Beats per Minute
Athlete	49 – 55.
Excellent	56 – 61
Great	62 – 65
Good	66 – 69
Average	70 -73
Below Average	74 - 81
Poor	82+

The user can also choose the ‘Custom’ option where they can enter their desired range to search through. This options functions 100%.

Option 6 – This option allows the user to search for a particular that they must enter, the program then displays all the readings with matching input as well as its respective patient. This options functions 100%.

Option 7 – When selected, the user must choose again from two options to either add or update a reading of data. If the user chooses to add to the data, they must then enter a new number which will then be stored. If the user chooses to update the data, they must input a number they wish to change, as well as the new number they would like to update it too.

Option 8 – This option generates a histogram based on the data and displays the respective ranges as well as how many occurrences happened for each range. For the histogram, one asterisk ‘*’ is displayed for every 5 occurrences. This options functions 100%.

Option 9 – This option saves the data as well as any changes or additions made to the file ‘output.txt’ for viewing. This options functions 100%.

Option 10 – This option terminates the program. This options functions 100%.
