# Text-File-Manager
Small &amp; Simple library to quickly opening .txt files, read specific lines and write into them. </br></br>


# Documentation
<b>bool load(string path);</b></br>
<b>Usage:</b> Loads input file</br>
<b>Parameters:</b> <b>string path</b> - Path to the file</br>
<b>Returns:</b> returns true if loaded successfully, false otherwise</br></br>


<b>string read(int lineNum);</b></br>
<b>Usage:</b> Used to read specific line of the file</br>
<b>Parameters:</b> <b>int lineNum</b> - Number of the line to be read</br>
<b>Returns:</b> returns the line it read, "" if it couldn't read successfully</br></br>


<b>int getLength();</b></br>
<b>Usage:</b> Used to determine the length of the file</br>
<b>Returns:</b> returns the amount of lines</br></br>

<b>bool createFile(string path);</b></br>
<b>Usage:</b> Used to write to output file</br>
<b>Parameters:</b> <b>string arg</b> - String that will be written</br>
<b>Returns:</b> returns true if string was written successfully, false otherwise</br></br>

<b>bool write(string arg);</b></br>
<b>Usage:</b> Used to write to output file</br>
<b>Parameters:</b> <b>string arg</b> - String that will be written</br>
<b>Returns:</b> returns true if string was written successfully, false otherwise</br></br>


<b>bool closeFile(char c);</b></br>
<b>Usage:</b> Used to close opened files</br>
<b>Parameters:</b> <b>char c</b> - <b>i</b> for input file <b>o</b> for output file </br>
<b>Returns:</b> returns true if file was closed successfully, false otherwise.</br></br>

# To-Do
- Add null file protection when reading
