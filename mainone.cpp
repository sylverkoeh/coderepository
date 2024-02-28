 if(argc < 2) {
        cout << "Please pass the filename as an argument: ./a.out filename.srt\n";
        return 0;
    }


 if(element->getSpeakerCount())
        {
            std::vector<std::string> name = element->getSpeakerNames();
            for(std::string display : name)
                myfile<<display<<", ";
            myfile<<endl;
        }

        myfile<<"ignore : "<<element->getIgnoreStatus()<<endl;
        myfile<<"END"<<endl<<endl;
    }
 
int main() {
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}
