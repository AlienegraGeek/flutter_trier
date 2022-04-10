import 'package:flutter/material.dart';

class FirstRoute extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('First Route'),
      ),
      body: Center(
        child: RaisedButton(
          child: Text('Open route'),
          onPressed: () {
            Navigator.push(
              context,
              MaterialPageRoute(builder: (context) => SecondRoute()),
            );
          },
        ),
      ),
    );
  }
}

class SecondRoute extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
        appBar: AppBar(
          title: Text("Second Route"),
        ),
        body: Wrap(
          children: <Widget>[
            MyHomePage(
              // title: 'Flutter Demo Page',
            )
          ],
        ));
  }
}

class MyHomePage extends StatefulWidget {
  // MyHomePage({Key key, this.title}) : super(key: key);

  // This widget is the home page of your application. It is stateful, meaning
  // that it has a State object (defined below) that contains fields that affect
  // how it looks.

  // This class is the configuration for the state. It holds the values (in this
  // case the title) provided by the parent (in this case the App widget) and
  // used by the build method of the State. Fields in a Widget subclass are
  // always marked "final".

  // final String title;

  @override
  _MyHomePageState createState() => _MyHomePageState();
}

class _MyHomePageState extends State<MyHomePage> {
  @override
  Widget build(BuildContext context) {
    // kraken 0.9.1-0.10.0
    // return Kraken(bundle: KrakenBundle.fromUrl('assets://assets/script/video.js'));

    // kraken 0.9.0
    // return Kraken(bundlePath: 'assets/script/video.js');
    return Scaffold(
      appBar: AppBar(),
      body: Align(
        alignment: Alignment.bottomCenter,
        child: Container(
          color: Color(0xFFFAFAFF),
          padding: EdgeInsets.only(top: 10, bottom: 20),
          child: AnimatedPadding(
            padding: MediaQuery.of(context).viewInsets,
            duration: const Duration(milliseconds: 1),
            curve: Curves.decelerate,
            child: Container(
              child: Row(
                children: [
                  IconButton(
                      onPressed: () {},
                      icon: Icon(
                        Icons.add_circle,
                        color: Color(0xFFA9AAB4),
                      )),
                  Expanded(
                    child: Focus(
                      onFocusChange: (hasFocus) {
                        if (hasFocus) {
                          // _scrollController.animateTo(_scrollController.position.maxScrollExtent, duration: Duration(milliseconds: 300), curve: Curves.ease);
                        }
                      },
                      child: TextFormField(
                        keyboardType: TextInputType.text,
                        // focusNode: _keyboardNode,
                        // controller: _msgController,
                        onTap: () {
                          // _scrollController.animateTo(_scrollController.position.maxScrollExtent, duration: Duration(milliseconds: 500), curve: Curves.ease);
                          // if (_scrollController.offset > 400) {
                          //   print('jump =' + _scrollController.offset.toString());
                          //   _scrollController.jumpTo(0.0);
                          // } else {
                          //   _scrollController.animateTo(0.0, duration: Duration(milliseconds: 500), curve: Curves.ease);
                          //   print('animate =' + _scrollController.offset.toString());
                          // }
                          // Future.delayed(Duration(milliseconds: 200), () {
                          //   _scrollController.animateTo(_scrollController.position.maxScrollExtent, duration: Duration(milliseconds: 500), curve: Curves.ease);
                          // });
                        },
                        autofocus: false,
                        onEditingComplete: () {
                          setState(() {
                            // chatSendMsgList.add(ChatSendMsg(
                            //   _msgController.text,
                            //   'https://fileminiapp.oss-cn-shenzhen.aliyuncs.com/filecoin_logo.png',
                            //   true,
                            //   true,
                            //   DateTime.now().toString().substring(0, 19),
                            // ));
                            // TODO: 发送消息到后台接口{}
                          });
                          // _msgController.clear();
                        },
                        decoration: InputDecoration(
                          fillColor: Color(0xFFF0F0FB),
                          filled: true,
                          hintText: "输入聊天内容",
                          hintStyle: TextStyle(color: Color(0xFF777778)),
                          contentPadding: EdgeInsets.only(left: 12, right: 12),
                          border: OutlineInputBorder(
                            borderSide: BorderSide(
                              color: Color(0xFFF0F0FB),
                              width: 0.0,
                            ),
                            borderRadius: BorderRadius.circular(30),
                          ),
                          focusedBorder: OutlineInputBorder(
                            borderRadius: BorderRadius.all(Radius.circular(30)),
                            borderSide: BorderSide(
                              color: Color(0xFFF0F0FB),
                              width: 0.0,
                            ),
                          ),
                          enabledBorder: OutlineInputBorder(
                            borderRadius: BorderRadius.all(Radius.circular(30)),
                            borderSide: BorderSide(
                              color: Color(0xFFF0F0FB),
                              width: 0.0,
                            ),
                          ),
                        ),
                      ),
                    ),
                  ),
                  IconButton(
                      onPressed: () {},
                      icon: Icon(
                        Icons.mood,
                        color: Color(0xFFA9AAB4),
                      )),
                  IconButton(
                      onPressed: () {},
                      icon: Icon(
                        Icons.keyboard_voice,
                        color: Color(0xFFA9AAB4),
                      )),
                ],
              ),
            ),
          ),
        ),
      ),
    );
  }
}
