# Note: - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
# - 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.
def timeConversion(s):
    hour = int(s[0]+s[1])
    ind = s[len(s)-2]
    if ind == "P" and hour<12:
        hour+=12
    elif ind == "A" and hour>=12:
        hour-=12
    store = ""
    for i in range(2,len(s)-2):
        store+=s[i]
    s=str(hour)+store
    if len(s)<8:
        s='0'+s;
    return s
