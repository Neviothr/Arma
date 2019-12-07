import itertools
import os
import sys
import tkinter as tk
import zipfile
from tkinter import filedialog

desktop_dir = "C:\\Users\\Admin\\Desktop\\"

# file selection dialog
root = tk.Tk()
root.withdraw()

ace3_zip = filedialog.askopenfiAdminme()

# extract zip file
ace3_zip_ref = zipfile.ZipFile(ace3_zip, "r")
ace3_zip_ref.extractall(desktop_dir)
ace3_zip_ref.close()

# list files in current ace3 install
used_pbos = []
installed_ace3 = "E:\Steam\steamapps\common\Arma 3\@ace"

for r, d, f in os.walk(installed_ace3):
    for file in f:
        if ".bisign" not in file:
            used_pbos.append(file)

extracted_ace3_zip = "C:\\Users\\Admin\\Desktop\\@ace"

# get bisign file version and commit info
bisign_ext = os.listdir(extracted_ace3_zip + "\\addons")
bisign_ext = bisign_ext[1].replace(bisign_ext[0], "")

# create list of files in extraced_ace3_zip dir and flatten list
# create a list of directories and reverse it to work around empty folders inside folders
directories = []

print("Deleting unused PBOs and BISIGNs:")

for r, d, f in os.walk(extracted_ace3_zip):
    for file in f:
        if ".bisign" not in file and file not in used_pbos:
            os.remove(r + "\\" + file)  # delte pbo
            os.remove(r + "\\" + file + bisign_ext)  # delete bisign

            print(file)
            print(file + bisign_ext)
    directories.append(r)

# empty line for readability
print("")

directories.reverse()

print("Deleting empty directories:")

# check if dir is empty before deleting empty folder
for dir_path in directories:
    if os.path.isdir(dir_path):
        if len(os.listdir(dir_path)) == 0:
            print(dir_path)
            os.rmdir(dir_path)

# pause after program is done to review output
os.system("pause")
