import sys
print("Nhap cac so nguyen duong")
line = input()
nums = []
chuso=0
so = False
for c in line:
	if c >= '0' and c <= '9':
		chuso = chuso * 10 + (ord(c) - ord('0'))
		so = True
	elif c == ' ' and so == True:
		nums.append(chuso)
		chuso = 0
		so = False
if (so):
	nums.append(chuso)
print("Nhap target")
target=int(input())
for i in range (0, len(nums)):
	for j in range (i+1, len(nums)):
		if nums[i] + nums[j] == target:
			print("Vi tri cua hai so la: ",i," va ",j)
			sys.exit()
