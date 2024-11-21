def unique_chars(s):
    unique = []
    for char in s:
        if char.isalpha() and char not in unique:
            unique.append(char)
    return unique

sen= input()
char_list = unique_chars(sen)
print(len(char_list))
