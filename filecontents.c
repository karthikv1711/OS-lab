#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
int main() {
    char buff[100];
    DIR *dirp;
    struct dirent *dptr;  
    printf("\n\nEnter directory name:");
    scanf("%s", buff);
    
    dirp = opendir(buff);
    if (dirp == NULL) {
        printf("The given directory does not exist.\n");
        exit(1);
    }

    // Read and print directory contents
    printf("Contents of directory %s:\n", buff);
    while ((dptr = readdir(dirp)) != NULL) {
        printf("%s\n", dptr->d_name);
    }
    // Close the directory stream
    closedir(dirp);
    return 0;
}

/*
Enter directory name:/home/vitcse/Downloads
Contents of directory /home/vitcse/Downloads:
.
..
dataset (7).zip
User_Data.csv
peerj-1201.pdf
images (2).jpeg
VSCodeUserSetup-x64-1.82.0.exe
salaar hd wallpaper for pc - Google Search.html
dsa programs.pdf
Copy of numpy (1).ipynb
schema of responsible consumption and production - Google Search_files
WT_INTERNAL.pdf
AWS_Academy_Graduate___AWS_Academy_Cloud_Foundations_Badge20211124-47-663xns.pdf
exercise-creating-reading-and-writing.ipynb
google-chrome-stable_current_amd64.deb
archive (5).zip
csp on health and hygiene original.docx
sign_mnist_valid.csv
dataset (2).zip
uml.pdf-20240106T060904Z-001.zip
Git-2.47.1-32-bit.exe
npp.8.4.1.Installer.x64.exe
DS lab through c (2).pdf
prabhas.jpeg
VSCodeUserSetup-x64-1.68.1.exe
resume.docx
google-chrome-stable_current_amd64 (14).deb
archive(2).zip
collection (2)sdg.zip
pen survey.jpg
Exercise 2 (2).docx
Introduction to Web (1).ppt
APPL_Numpy.ipynb
student details (11)
dbms.jpg
OOP Through Java - UNIT-2 (1).docx
.~lock.Experiment No1 (1).docx#
mysql-connector-j-8.0.31
google-chrome-stable_current_x86_64 (1).rpm
Experiment  No2 (1).docx
Ford Mustang 1969.jpeg
student details (8)
50_startups.csv
file_example_XLS_50.xls
archive (12).zip
npp.8.4.2.Installer.x64 (1).exe
virat.jpg
APPL record.pdf
unit2-SPM.docx
JASWANTH ANIL KUBATTU-CODE_RIDERS_Vish-certificate.pdf
boston.csv
Ex_Files_Intro_DataStructures_Algorithms_Java.zip
download.xls
node-v18.12.0-x86.msi
images (1).jpeg
.~lock.RAMANA LOAD.ods#
WT_INTERNAL (1).pdf
.~lock.L 23 Natural Acceptance of Human Values v3.ppt#
50_Start ups (1).csv
RWDmedia.html
FML_3.ipynb
FML.ipynb
Resume.pdf
google-chrome-stable_current_amd64 (17).deb
google-chrome-stable_current_amd64 (12).deb
bieber-16-9-longform.webp
.~lock.salary.csv#
2.Bit_stuffing  Char_stuffing (1).docx
images (3).jpeg
archive (1).zip
OS notes.doc
mid 1 imp questions.docx
Data_Sheet_1_The Need for Social Considerations in SDG 14.docx
google-chrome-stable_current_amd64 (8).deb
download.jpeg
loginpage.docx
RAMANA LOAD.pdf
50_Startups (1).csv
google-chrome-stable_current_amd64 (10).deb
archive(5).zip
Experiment  No2 (4).docx
LL1.jff
Software+Testing+Fundamentals.pdf
node-v18.12.0-x86 (1).msi
21pa5a5406(NVIDIA).pdf
LAB - PRACTICE DOCUMENT-20230916.zip
Community Survey Project PPT.pptx
BACK TO THE PRESENT - Escape Room Herndon VA.png
sign_mnist_train.csv
Transmission Corporation of Andhra Pradesh - Wikipedia_files
4636601e-9a89-4b14-8458-75d708577a6c.html
Classification Concepts.pdf
Copy of numpy (1) (1).ipynb
images (4).jpeg
Financial Sample.xlsx
O.S Lab Manual R23 new.pdf
Experiment  No2 (2).docx
ll parse tree.jff
archive (5) (1).zip
agr (1).html
Upendra_at_KLE_Society's_Law-College,_Bangalore_2.jpg
APPL_Pandas (1).ipynb
CAT DOG.zip
devops
QuestionBankMID2_ME.pdf
Resume (1).pdf
Resume.vijay.pdf
AddMe pythonbegin1 Question Contests HackerRank.html
loginpage (5).docx
salary.csv
piotr-szulawski-DCmUhk54F6M-unsplash.jpg
PortableGit-2.47.1-32-bit.7z.exe
notebook63afc3d4d5.ipynb
sidhu (1).html
Anupama Anupama Parameswaran in Orange Sari  (1).jpg
NodeJS-1.pdf
dbms2_files
student details (2)
How to Install and Use Wireshark on Ubuntu Linux (3).docx
JSP Scriptlet tag and Implicit Object (1).pdf
google-chrome-stable_current_amd64 (7).deb
.~lock.OOP Through Java - UNIT-2.docx#
google-chrome-stable_current_amd64 (11).deb
dog.jpeg
style.css
Html 5.ppt
PHP in Web Development.pptx
xampp-linux-x64-8.1.6-0-installer (1).run
code_1.83.0-1696350811_amd64.deb
Resume.vijay (1).pdf
PortableGit-2.47.1-64-bit.7z.exe
eclipse-inst-jre-linux64.tar.gz
Iris.csv
4636601e-9a89-4b14-8458-75d708577a6c (1).html
cropped-1440-900-719235.jpg
_.jpeg
images.jpeg
os-dev.pdf
code_1.71.2-1663191218_amd64 (1).deb
Experiment  No2 (6).docx
dbms_files
StarUML_5.1.0_amd64.deb
loginpage (2).docx
student details (6)
archive(4).zip
wallpaperflare.com_wallpaper (4).jpg
.~lock.Experiment No1.docx#
Software Engineering_ A Practitioner's Approach.pdf
npp.8.4.2.Installer.x64 (2).exe
SE UNIT-1 Notes -p.pdf
archive (4) (2).zip
marine-species_fig-1.csv
google-chrome-stable_current_amd64 (3).deb
dataset (1).zip
embed.txt
ojdbc14-9.2.0.1.jar.zip
How to Install and Use Wireshark on Ubuntu Linux.docx
xampp-linux-x64-8.1.6-0-installer (2).run
dbms2.jpg
How to Install and Use Wireshark on Ubuntu Linux (4).docx
JFLAP-7.0_With_Source.jar
IMAGE_1622204880.jpg
graphics.h
.~lock.How to Install and Use Wireshark on Ubuntu Linux (4).docx#
mmmmmmmm.docx
dinnu.webp
xampp-linux-x64-8.1.6-0-installer.run
WhatsApp Image 2023-04-13 at 11.18.00.jpeg
.~lock.class diagram.docx#
Fundamentals of Software Engineering, Fourth Edition, Rajib Mall.pdf
agr.html
data sets-20240111T045611Z-001.zip
WT LAB MANUAL FINAL PRINT.pdf
Program 3(CRC) (1).docx
google-chrome-stable_current_amd64 (2).deb
xampp-linux-x64-8.0.23-0-installer.run
bootstrap-login-form-with-image.zip
collection.zip
linkedlist.pdf
Introduction to Web (2).ppt
dataset (9).zip
CD Assignment 1.pdf
APPL_Pandas.ipynb
50_Start ups.csv
python-code.jpg
Salary_Data (1).csv
dataset.zip
archive (7).zip
iris.zip
PHP in Web Development (1).pptx
Happy Home-20230609T043057Z-001.zip
L 23 Natural Acceptance of Human Values v3.ppt
ojdbc14.jar.zip
file_example_XLSX_1000.xlsx
mahesh.jpeg
mustang.jpg
archive (4) (1).zip
Experiment  No2 (5).docx
Unit-1-20211124.zip
jenkins.war
google-chrome-stable_current_amd64 (9).deb
Notepad++ _UbkSZ (1).exe
Lasso_regression_Boston.ipynb
Program 3(CRC).docx
.~lock.unit2-SPM.docx#
2.Bit_stuffing  Char_stuffing (2).docx
archive(3).zip
FML_6_KNN.ipynb
RaviPhanindra_Resume.pdf
dataset (8).zip
FORD MUSTANG 1967 FASTBACK _ 4K.mp4
Salary.csv
kfold.ipynb - Colaboratory.html
Syllabus (3).docx
Experiment No1.docx
ravi (1).html
Advertising.csv
2.3. Unit sql.pptx
Program 3(CRC) (3).docx
mysql-connector-j-8.0.31.tar.gz
knn_on_iris.dataset
class diagram (1).docx
sublime_text_build_4126_x64.tar.xz
student details (1)
jpeg
vijay resume.pdf
kaggle.json
archive (3).zip
dataset (12).zip
students_placement_data (1).csv
apache-tomcat-10.1.2
class diagram.docx
dijkstra.py
DBMS - SDG Projects 11 OCT 2023 S M Hussian VIT Bhimavaram.pdf
RAMANA LOAD.ods
Data Communications and Networking By Behrouz A.Forouzan.pdf
tony2.webp
archive (6).zip
student details (7)
VisualStudioSetup.exe
JFLAP7.1.jar
wp11992498-satyadev-wallpapers.jpg
collection (1).zip
pen su.jpg
qrcode_www.upsc.gov.in.png
html-login-form-without-css.zip
untitled-design-6-47.jpeg
project1_files
.~lock.L 23 Natural Acceptance of Human Values v3 (1).ppt#
v.pdf
.~lock.mmmmmmmm.docx#
mb.jpg
student details (9)
dataset (3).zip
50_Startups.xls
agr (2).html
Git-2.47.1-64-bit.exe
Unit-2-20211124.zip
OOP through Java Lab Syllabus.pdf
Introduction to Web.ppt
2.Bit_stuffing  Char_stuffing.docx
node-v18.12.0-linux-x64.tar.xz
How to Install and Use Wireshark on Ubuntu Linux (2).docx
Syllabus (2).docx
Notepad++ _UbkSZ.exe
virat.webp
KMeans.ipynb
Salary_Data.csv
Experiment No1 (2).docx
style1.css
Cf51n9nbSD68ZTB5tTf3sA_a7545121c27b41a2b32db66f1cde7bf1_Botium-Toys-Scope-goals-and-risk-assessment-report.docx
avengers.jpeg
archive (2).zip
loginpage (4).docx
loginpage (6).docx
sidhu.html
dbms pro.jpeg
OOP through Java Lab Syllabus (1).pdf
dbms3_files
amar.jff
google-chrome-stable_current_amd64 (15).deb
project_files
UI_UX Design Expert Master Program.pdf
sdg
IRIS.csv
DSC_0798.JPG
III-II mid 1 question bank cse.docx
Tenses (1) (2).doc
dataset (6).zip
student details
dataset (10).zip
vit logo
Tenses (1).doc
.~lock.programs.docx#
AddMe pythonbegin1 Question Contests HackerRank_files
code_1.81.1-1691620686_amd64.deb
VSCode-win32-arm64-1.81.1.zip
loginpage (3).docx
How to Install and Use Wireshark on Ubuntu Linux (1).docx
jenkins (1).war
dbms3.jpg
certificate4943748.pdf
pawan kalyan .jpeg
npp.8.4.2.Installer.x64.exe
1689441674002_15-07-2023 1910.pdf
L 23 Natural Acceptance of Human Values v3 (1).ppt
RAM,.ods
student details (5)
wallpaperflare.com_wallpaper.jpg
IT WORKSHOP LAB MANUAL.docx
ravi.html
salaar hd wallpaper for pc - Google Search_files
archive(1).zip
certificate8557922.pdf
DBMS_RECORD_FINAL(REFERENCE) (1).pdf
dbms pro_files
dbms1_files
Unit 1 PPT (1).ppt
eclipse-inst-jre-linux64 (1).tar.gz
google-chrome-stable_current_amd64 (1).deb
Jumanji (1995) Telugu HD Movie.mp4
lex.yy.c
Experiment  No2 (3).docx
DS lab through c (2) (1).pdf
project.jpg
Screenshot 2022-07-15 at 14-41-13 How do you input 2 numbers and display their sum - Answers.png
lecture1422914957.pdf
submit.csv
Syllabus.docx
apache-tomcat-10.1.2.tar.gz
APPL_Numpy (1).ipynb
google-chrome-stable_current_amd64 (5).deb
RWD.html
VSCodeUserSetup-x64-1.71.2.exe
style2.css
library.jpeg
Happy Home-20230331T043304Z-001.zip
project1.jpg
linkedlist (1).pdf
Introduction to Web (4).ppt
Untitled.pdf
LAB - PRACTICE DOCUMENT-20231013.zip
archive(6).zip
dataset (4).zip
JON.jpg
Tenses (1) (1).doc
AWS_Academy_Graduate___AWS_Academy_Cloud_Foundations_Badge20211124-44-8cav77.pdf
login-page-with-username-and-password.zip
dsa programs (2).pdf
VirtualBox-7.1.6-167084-Win.exe
sublime-text_build-3211_amd64.deb
loginpage (1).docx
students_placement_data.csv
download
student details (3)
dataset (11).zip
Introduction to Web (3).ppt
google-chrome-stable_current_x86_64.rpm
v (2).pdf
Exercise 2 (1).docx
APSCHE-SOP.zip
Transmission Corporation of Andhra Pradesh - Wikipedia.html
student details (12)
UHV Handout 5-Harmony in the Nature and Existence.pdf
Iris (1).csv
kfold.ipynb - Colaboratory_files
Experiment No1 (1).docx
Noise_removal.ipynb
student details (10)
vishnu.png
titanic.csv
a.out
ojdbc14.jar
google-chrome-stable_current_amd64 (16).deb
piotr-szulawski-DCmUhk54F6M-unsplash (1).jpg
dbms1.jpg
tytytytyyy.webp
v (1).pdf
ds.save.jff
google-chrome-stable_current_amd64 (18).deb
DBMS_RECORD_FINAL(REFERENCE) (2).pdf
Experiment  No2.docx
CD Assignment 1 (1).pdf
google-chrome-stable_current_amd64 (6).deb
dataset (5).zip
DWDM Record.docx
DSC_0798 (1).JPG
student details (4)
google-chrome-stable_current_amd64 (13).deb
JSP Scriptlet tag and Implicit Object (1) (1).pdf
Tokens.ipynb
Exercise 2.docx
google-chrome-stable_current_amd64 (4).deb
uml.pdf
archive (9).zip
wallpaperflare.com_wallpaper (3).jpg
Git-2.47.1-64-bit (1).exe
schema of responsible consumption and production - Google Search.html
archive (11).zip
BUSINESS.swf
PHP in Web Development (2).pptx
dsa programs (1).pdf
archive (8).zip
untitled-design-6-47 (1).jpeg
dsa programs (3).pdf
UNIT-V.pdf
archive (10).zip
archive.zip
archive (4).zip
marvel.jpeg
DBMS_RECORD_FINAL(REFERENCE).pdf
titanic_dataset
OOP Through Java - UNIT-2.docx
firstlex.l
Syllabus (1).docx
jenkins (2).war
WT  MID2 Quesion Bank.pdf
Program 3(CRC) (2).docx
programs.docx
bollywood-hero-baahubal-prabhas-8jaxxb9xzg4ps4jh.jpg
BABU.jpeg
50_Startups.csv
mikasa.jpg










*/
