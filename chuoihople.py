def check(s):
    st=[]
    for c in s:
        if c in "({[": st.append(c)
        if c in ")}]":
            if c==')' and st[-1]!='(': return False
            if c=='}' and st[-1]!='{': return False    
            if c==']' and st[-1]!='[': return False
            st.pop()
    return len(st)==0
print("Nhap cac ki tu")
line = input()
if check(line): print("Dung") 
else: print("Sai")