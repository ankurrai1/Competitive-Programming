// this is solution file for problem of question Grading Students

// problem statement link

vector<int> gradingStudents(vector<int> grades) {
    for(int i  = 0; i < grades.size(); i++){
        int val = grades[i];
        if(val >= 38){
            if(5 - (val % 5)< 3){
                grades[i] = val + (5 - (val % 5));
            }
        }
    }
    return grades;
}
