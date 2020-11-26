# Text-File-Manager
Small &amp; Simple library to quickly opening .txt files, read specific lines and write. </br>
</br>
# Documentation
<b>bool load(string path);</b> //Loads file to read from, returns true if loaded successfully, false otherwise</br></br>
<b>string read(int lineNum);</b> //Read specific line from the loaded file, returns line string </br></br>
<b>int getLength(int length);</b> //Returns length of file in lines </br></br>
<b>bool createFile(string path);</b> //Creates empty file with given path, returns true if created successfully, false otherwise </br></br>
<b>bool write(string arg);</b> //Writes to the file, returns true if written successfully, false otherwise </br></br>
<b>bool closeFile();</b> //Closes file, returns true if closed successfully, false otherwise </br></br>

# To-Do
- Add null file protection when reading
