// problem statement is as following :
// Given a vector  scores for a season,
// find and print the number of times she breaks her records for most and least points scored during the season.

// solution function is implemented here:

vector<int> breakingRecords(vector<int> scores) {
    int highest, lowest, recordHC = 0, recordLC = 0;
    highest = scores[0];
    lowest = scores[0];
    for(int a: scores){
        if(highest < a) {
            highest = a;
            recordHC++;
        }
        if(lowest > a) {
            lowest = a;
            recordLC++;
        }
    }
    vector<int> res = {recordHC, recordLC};
    return res;
}
