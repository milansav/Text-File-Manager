# Text-File-Manager
Small &amp; Simple library to quickly opening .txt files, read specific lines and write. </br>
</br>
# Documentation
bool load(string path); //Loads file to read from, returns true if loaded successfully, false otherwise</br>
string read(int lineNum); //Read specific line from the loaded file, returns line string </br>
int getLength(int length); //Returns length of file in lines </br>
bool createFile(string path); //Creates empty file with given path, returns true if created successfully, false otherwise </br>
bool write(string arg); //Writes to the file, returns true if written successfully, false otherwise </br>
bool closeFile(); //Closes file, returns true if closed successfully, false otherwise </br>

# To-Do
- Add null file protection when reading
