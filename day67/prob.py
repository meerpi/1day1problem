def unique_chars(s):
    unique = []
    for char in s:
        if char.isalpha() and char not in unique:
            unique.append(char)
    return unique

sentence = input()
char_list = unique_chars(sentence)
print(len(char_list))
