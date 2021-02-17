vector<int> gradingStudents(vector<int> grades) {
        vector <int>:: iterator it=grades.begin();
        vector <int> store;
        int take=0;
        while(it!=grades.end()){
            if((*it)>=38 && (*it)%5!=0){
                take=((*it)/5)+1;
                if((take*5-(*it))<3)
                  *it=take*5;
            }
            store.push_back(*it);
            it++;
        }
        return store;
}
