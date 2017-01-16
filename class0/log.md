## 20160116
### 菱形
#### 跑的順序點
`def run_once(self, pos=0):`

要調整任意點開始順序會不一樣

```cpp
    self.run_core([0,1])
    self.run_core([1,0])
    self.run_core([0,-1])
    self.run_core([-1,0])
```

初步用if解決了，但是覺得越寫越長了，總覺得應該有更好的解

```cpp
if self.init==0 or pos==0:
    self.run_core([0,1])
    self.init=0
if self.init==0 or pos==1:
    self.run_core([1,0])
    self.init=0
if self.init==0 or pos==2:
    self.run_core([0,-1])
    self.init=0
if self.init==0 or pos==3:
    self.run_core([-1,0])
    self.init=0
```

#### 任意數值開始
因為程式是用-1來判定是否撞牆了如果從負號開始必然有可能會造成-1的誤判
這種判定方式有問題...欠下程式債了，之後要極力避免

暫時可以用兩個陣列才處理，第一個陣列判定位置第二個陣列儲值數值
不過這要是陣列太大勢必造成效能浪費，也不是最佳解

陣列屬性改為字串，這樣可以把-1判定改為星號判定之類的，或者是最佳解

#### 反繞
前面為了處理正繞的順序點不同已經把代碼打得很醜了，在一個反繞...實在是
如果再新增第二個core感覺又重工，不知道有什麼好方式優化可以兼得的


## 20160114
### 意外解決一個bug
有些bug是因為不足夠嚴謹的邏輯造成的，足夠嚴謹的邏輯絕對不是為了裝逼，而是為了下一個人好(通常這個人是未來的自己)






