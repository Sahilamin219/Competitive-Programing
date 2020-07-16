import os, re
base_dir = os.path.dirname(os.path.abspath(__file__))
char = "delete"
store = []
for filename in os.listdir(base_dir):
	for i in range(len(filename)):
		# print(filename[i:i+len(char)+1])
		if filename[i:i+len(char)].lower() == char:
			store.append(filename)
if store:
	print(f"Total of {len(store)} have been removed from '{base_dir}'!")
	print("These were the files.")
	print("-----------------------------")
	for j, i in enumerate(store, 1):
		print(f"{j}) '{i}'")
	print("-----------------------------")
	for i in store:
		os.remove(i)
else:
	print("No file with 'delete' token in them!")