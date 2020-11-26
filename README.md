# Text-File-Manager
Small &amp; Simple library to quickly opening .txt files, read specific lines and write. </br>
</br>
# Documentation
<b>bool load(string path);</b> //Loads file to read from, returns true if loaded successfully, false otherwise</br></br>
string read(int lineNum); //Read specific line from the loaded file, returns line string </br></br>
int getLength(int length); //Returns length of file in lines </br></br>
bool createFile(string path); //Creates empty file with given path, returns true if created successfully, false otherwise </br></br>
bool write(string arg); //Writes to the file, returns true if written successfully, false otherwise </br></br>
bool closeFile(); //Closes file, returns true if closed successfully, false otherwise </br></br>

# To-Do
- Add null file protection when reading
