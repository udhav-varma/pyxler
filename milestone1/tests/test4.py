def build_lps(pattern):
    m = len(pattern)
    lps = [0] * m
    length = 0
    i = 1
    j = 1
    j += i

    while i < m:
        if pattern[i] == pattern[length]:
            length += 1
            lps[i] = length
            i += 1
        else:
            if length != 0:
                length = lps[length - 1]
            else:
                lps[i] = 0
                i += 1

    return lps

def kmp_search(text, pattern):
    n = len(text)
    m = len(pattern)
    lps = build_lps(pattern)
    print("Reached kmp")
    i, j = 0, 0

    while i < n:
        if pattern[j] == text[i]:
            i += 1
            j += 1

        if j == m:
            print("Pattern found at index:", i - j)
            j = lps[j - 1]

        elif i < n and pattern[j] != text[i]:
            if j != 0:
                j = lps[j - 1]
            else:
                i += 1

# Example Usage:
text = "ABABDABACDABABCABAB"
pattern = "ABABCABAB"

kmp_search(text, pattern)
