## 展望

因为是SVG，所以是支持和[wenyan-lang](https://github.com/wenyan-lang/wenyan)那样直接通过SVG作为输入数据还原成节点格式的可能性的。

可以参考[本文件](https://raw.githubusercontent.com/wenyan-lang/wenyan/827feb62f40c156cb2dc6881544eba1a81ef3551/renders/mandelbrot.svg)作为实例。若要该图像的查看代码需要点击[这里](https://github.com/wenyan-lang/wenyan/blob/master/renders/mandelbrot.svg)

![](https://raw.githubusercontent.com/wenyan-lang/wenyan/827feb62f40c156cb2dc6881544eba1a81ef3551/renders/mandelbrot.svg)

wenyan-lang实现的效果如上所述

不过,就我们的项目而言，如果需要反向转换为Node节点，需要使用[svgpp](https://github.com/svgpp/svgpp)作为支持，【解析】SVG。

当然后端推荐还是使用pugixml，您可以替换成其他xml后端库

不过，就本项目的由数据生成SVG的过程而言，我们没有打算使用其他更复杂的手段，直接用类似cgi的方式硬输出就是可以的。虽然是重复造轮子，但是这个轮子非常小，并且直接使用svgpp这样的svg解析库是写不出这么json风格的XML来的（笑）

渲染过程中其实后端能规定的只有节点位置和链接的拓扑，宽高粗细色彩等，其实都属于前端问题，我们也不例外的将采用样式表独立的方法操作，操作时读取样式表。

不过我们的样式表并不会沿用前端css语法。本项目中已经很广泛的使用XML作为数据交换文件，因此样式表也将采用xml来定义。

此外，渲染所使用的样式表后缀和节点文件的后缀均为unigal，在统计Nodelist的时候会被一并统计进去，因此Nodelist总是会多一个样式文件。为确定样式文件的唯一性，每次编译时需要有且只有一个样式文件，【暂定，以后也可能改】必须命名为```StyleSheet.unigal```，并且根节点必须为```<stylesheet>```。否则应当给予```No StyleSheet found```报错处理。



如果想要在网页前端里面找到一个渲染器的话，可以考虑以下几个项目，都是基于js/ts的，都是前端壬。

https://github.com/adrai/flowchart.js

https://github.com/bramp/js-sequence-diagrams  可以直出SVG

https://github.com/graphql-editor/diagram  有节点的概念

https://github.com/bpmn-io/diagram-js





6.关于渲染后端问题，如果不想用我们默认的渲染器的话，可以考虑向我们提供一份python的parser然后调用这个python的流程图库绘制。库的名字是[mingrammer/diagrams](https://github.com/mingrammer/diagrams)。（果然干这个的都是diagram）。虽然是非常专门用来画网络架构图的，但是我想也是有素材的，魔改后也不是不可以用于其他流程图的绘制。关于它的绘图思想我们会慢慢学习。关于他的介绍文章可以看[这篇](https://mp.weixin.qq.com/s/IuZ7ihksOGzgpLTKqKcw1Q
)国内的文章。

7.可以参考Typora的mermaid这个库的渲染实现方式，比上面第六条好