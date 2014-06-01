// header file --- high level overview of all functions and responsibilities

//basically makes a word, f(freq) table
void InitUnigramTable() ;

// Reads a single word from a file, assuming space + tab + EOL to be word boundaries 
void ReadWord(char *word, FILE *fin) ;

// Returns hash value of a word
int GetWordHash(char *word) ;

// Returns position of a word in the vocabulary; if the word is not found, returns -1
int SearchVocab(char *word) ;

// Reads a word and returns its index in the vocabulary
int ReadWordIndex(FILE *fin) ;

// Adds a word to the vocabulary
int AddWordToVocab(char *word) ;

// Used later for sorting by word counts - difference of two word freq counts
int VocabCompare(const void *a, const void *b) ;

// Sorts the vocabulary by frequency using word counts and re-hash
void SortVocab() ;

// Reduces the vocabulary by removing infrequent tokens
void ReduceVocab() ;

// Create binary Huffman tree using the word counts
// Frequent words will have short uniqe binary codes
void CreateBinaryTree() ;

// adds all the vocab words from the file to the vocab dict ;
void LearnVocabFromTrainFile() ;

// writes vocab and freq counts to file
void SaveVocab() ;

// reads, sorts, hashes vocab from saved file
void ReadVocab() ;

// allocates memory for word nodes and 'update' word nodes for grad descent
void InitNet() ;

//trains the net via skipgram/cbow + negative sampling / hierarchical softmax;
void *TrainModelThread(void *id) ;

//starts the training thread and handles saving results to file when done
void TrainModel() ;

//used to get input from command line
int ArgPos(char *str, int argc, char **argv) ;

// parses the input and starts training
//  int main(int argc, char **argv) {

