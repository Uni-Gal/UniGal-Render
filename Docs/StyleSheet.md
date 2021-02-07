# 样式表 StyleSheet

## 调用方法

还没想好

## 完整规则

```XML
<?xml version="1.0" encoding="utf-8"?>
<stylesheet>
  <background>
    <!--需要在当前的实现的样式-->
    <background-exist>
      <!--是否存在整图的边框-->
      <!--填bool变量，若为false则frame下其他所有元素均不必存在且存在无意义-->
    </background-exist>
    <background-fillcolor>
      <!--填充色-->
    </background-fillcolor>
    <background-fillopacity>
      <!--填充透明度-->
    </background-fillopacity>
  </background>
  <frame>
    <!--需要在当前的实现的样式-->
    <frame-exist>
      <!--是否存在整图的边框-->
      <!--填bool变量，若为false则frame下其他所有元素均不必存在且存在无意义-->
    </frame-exist>
    <frame-x-border>
      <!--X方向距viewBox的边距-->
    </frame-x-border>
    <frame-y-border>
      <!--Y方向距viewBox的边距-->
    </frame-y-border>
    <frame-x-radius>
      <!--X方向角半径-->
    </frame-x-radius>
    <frame-y-radius>
      <!--Y方向角半径-->
    </frame-y-radius>
    <frame-fillcolor>
      <!--填充色-->
    </frame-fillcolor>
    <frame-strokecolor>
      <!--描边色-->
    </frame-strokecolor>
    <frame-fillopacity>
      <!--填充透明度-->
    </frame-fillopacity>
    <frame-strokeopacity>
      <!--描边透明度-->
    </frame-strokeopacity>
    <frame-strokewidth>
      <!--描边粗细宽度-->
    </frame-strokewidth>
  </frame>
  <node>
    <!--需要在当前的实现的样式-->
    <node-fillcolor>
      <!--填充色-->
    </node-fillcolor>
    <node-strokecolor>
      <!--描边色-->
    </node-strokecolor>
    <node-fillopacity>
      <!--填充透明度-->
    </node-fillopacity>
    <node-strokeopacity>
      <!--描边透明度-->
    </node-strokeopacity>
    <node-strokewidth>
      <!--描边粗细宽度-->
    </node-strokewidth>
  </node>
  <text>
    <!--需要在当前的实现的样式-->
    <text-font-size>
      <!--字号-->
      <!--为int型整数-->
    </text-font-size>
    <text-font-family>
      <!--字体-->
      <!--为string-->
    </text-font-family>
    <text-color>
      <!--颜色-->
      <!--为rgb(r,g,b)-->
    </text-color>
    <!--暂时不实现仅预留样式表定义的-->
    <text-bold>
      <!--加粗-->
      <!--为bool变量-->
    </text-bold>
    <text-italic>
      <!--倾斜-->
      <!--为bool变量-->
    </text-italic>
    <text-shadow>
      <!--阴影-->
      <!--为bool变量-->
    </text-shadow>
    <text-opacity>
      <!--透明度-->
      <!--为0.00~1.00的浮点数-->
    </text-opacity>
    <text-color-start>
      <!--type=start的节点的颜色-->
      <!--为rgb(r,g,b)-->
    </text-color-start>
    <text-color-end>
      <!--type=end的节点的颜色-->
      <!--为rgb(r,g,b)-->
    </text-color-end>
  </text>
  <arrow>
    <!--需要在当前的实现的样式-->
    <arrow-width>
      <!--箭头粗细宽度-->
      <!--未来可能拆分为主体粗细和头部粗细-->
    </arrow-width>
    <!--暂时不实现仅预留样式表定义的-->
    <arrow-headsize>
      <!--头部大小-->
    </arrow-headsize>
    <arrow-roundtail>
      <!--圆滑末端-->
      <!--为bool变量-->
    </arrow-roundtail>
  </arrow>
</stylesheet>

```