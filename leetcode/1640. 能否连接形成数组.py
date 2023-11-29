class Solution:
    def canFormArray(self, arr: List[int], pieces: List[List[int]]) -> bool:
        index = {p[0]:i, p for i in enumerate(pieces) }
        i = 0
        while i < len(arr):
            if arr[i] not in index:
                return  false
            p = pieces[index[arr[i]]]
            if arr[i:i+len(p)] != p:
                return  false
            i += len(p)
        return true

