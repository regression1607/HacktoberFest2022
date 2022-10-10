Grammer is needed everywhere From writing a letter, email, essay or article. Good Grammer with a correct word spoken help you to communicate clearly and help you to put a good impression on others. So as a programmer we always want to do things with code. So in this post i will give you a brief introduction with example gingerit python module which help you correct spelling with python.

# Contents
* Gingerit python module
* Installation of gingerit python module?
* How to use gingerit python?
* Conclusion

## Gingerit python module?
So what is gingerit python module? gingerit is a python package that helps you in the grammatical correction of a word according to the context of a sentence. gingerit uses gingersoftware API. gingerapi helps you to check the grammatical mistake in terms, text, and documents and corrects them.

By using gingerit package you can fix grammatical mistakes and misspelled words and function. so lets move to the next part where we will install ginger python on our computer with the help of python pip.

## Installation of gingerit python module?

>pip install requests
>pip install cloudscraper
>pip install gingerit

## How to use gingerit python?
Here is an example code where we will gonna use gingerit package to build a simple grammar checker program. where I will pass a sentence with misspelled words and incorrect grammar. 

`` from gingerit import GingerIt ``
`` text = input("Enter a sentence >>: ") ``
`` corrected_text = GingerIt().parse(text) ``
`` print(corrected_text['result']) `` 

### OUTPUT
input sentance : my nme are khan. how are your doy?
output correct sentance : My name is Khan. How is your day?

So as you can see I have shared an example code above where I have done grammatical and spelling mistakes.

## Conclusion

Gengerit package has been not updated for a while by the person who has created it due to which if you install gengerit from pip it will show error and HTML code due to Cloudflare protection on API. so i have fixed that issue and shared that with the new genreit.py file so download it from above link. Make sure you put the gengerit.py file in the same path or folder where you test your code.
