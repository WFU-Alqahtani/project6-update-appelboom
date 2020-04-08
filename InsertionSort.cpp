#include <iostream>
#include <vector>
#include <cassert>
#include "BinaryInsertionSort.h"
#include "Node.h"
#include "LinkedList.h"
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <time.h>
#include <chrono>
using namespace std;

int main() {

    string filename;
   //read the file name of your dataset
    cin >> filename;

    vector<CSMatch> vFull;

    // populate the vector with the data from your data set
    string line, word;
    ifstream aFile(filename);
    if (aFile.is_open())
    {
        getline (aFile, line); //The first line is just headers
        vector<string> row;
        while ( getline (aFile, line))
        {
            row.clear();
            stringstream s(line);
            while (getline(s, word, ',')) {
                row.push_back(word);
            }
            CSMatch aMatch(stoi(row[0]), row[1], stoi(row[2]), stod(row[3]), row[4], row[5],
                            stoi(row[6]), stoi(row[7]), row[9], row[9], stoi(row[10]));
            vFull.push_back(aMatch);
        }
        aFile.close();
    }

    vector<CSMatch> v;
    time_t start, end;

    for (int size = 100; size <= 3000; size+= 100)
    {
        for (int index = 0; index < size; index++)
        {
            v.push_back(vFull.at(index));
        }
        // binary insertion sort
        time(&start);
        insertionSort(v, v.size());
        time(&end);

        double time_taken = double(end - start);
        cout << size << " " << time_taken << endl;

        v.clear();
    }

    // FINISH ME

    //Note that in this case, the time is in milliseconds

    for (int size = 100; size <= 3000; size+= 100){
            LinkedList the_list;

            for (int index = 0; index < size; index++)
            {
                the_list.append(vFull.at(index));
            }
            // binary insertion sort
            double msstart = chrono::duration_cast< chrono::milliseconds >(chrono::system_clock::now().time_since_epoch()).count();
            the_list.InsertionSort(the_list.getHead());
            double msend = chrono::duration_cast< chrono::milliseconds >(chrono::system_clock::now().time_since_epoch()).count();

            double time_taken = double(msend - msstart);
            cout << size << " " << time_taken << endl;

            //the_list.printList();
    }

}
