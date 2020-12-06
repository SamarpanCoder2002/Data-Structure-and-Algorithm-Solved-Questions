def check_binary_search_tree_(root):
    return check_bst(root,-1,10001)
def check_bst(root,Min,Max):
    if root is None:
        return True
    elif root.data<=Min or root.data>=Max:
        return False
    return check_bst(root.left,Min,root.data) and check_bst(root.right,root.data,Max)
