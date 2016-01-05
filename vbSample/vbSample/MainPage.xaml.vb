' The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=234238

''' <summary>
''' An empty page that can be used on its own or navigated to within a Frame.
''' </summary>
Public NotInheritable Class MainPage
    Inherits Page

    Dim WithEvents m_http As Chilkat.Http

    Dim m_dispatcher As Windows.UI.Core.CoreDispatcher

    Private Async Sub testHttpDownload()

        m_dispatcher = Windows.UI.Core.CoreWindow.GetForCurrentThread().Dispatcher

        m_http = New Chilkat.Http()

        textBox1.Text = ""

        Dim success As Boolean
        success = m_http.UnlockComponent("Anything for 30-day trial.")
        If (success <> True) Then
            textBox1.Text = m_http.LastErrorText
            Exit Sub
        End If


        Dim localFolder As Windows.Storage.StorageFolder
        localFolder = Windows.Storage.ApplicationData.Current.LocalFolder

        '  Download a .zip from chilkatsoft.com
        Dim localFilePath As String
        localFilePath = localFolder.Path & "\hamlet.zip"
        success = Await m_http.DownloadAsync("http://www.chilkatsoft.com/hamlet.zip", localFilePath)
        If (success <> True) Then
            textBox1.Text = m_http.LastErrorText
            Exit Sub
        End If

        ' The LastErrorText always contains information, even on success.  
        ' It is detailed information for the programmer, not the end-user of an application.
        textBox1.Text += "Success!" & vbCrLf & m_http.LastErrorText

    End Sub


    Private Async Sub m_http_PercentDone(sender As Object, eventArgs As Chilkat.PercentDoneEventArgs) Handles m_http.PercentDone

        ' Note: This callback happens in a background thread, and therefore to update
        ' a control on the UI thread, we must do it this way:
        Await m_dispatcher.RunAsync(Windows.UI.Core.CoreDispatcherPriority.Normal, Sub()
                                                                                       progressBar1.Value = eventArgs.PercentDone
                                                                                   End Sub)



    End Sub


    Private Sub Button_Click(sender As Object, e As RoutedEventArgs)

        testHttpDownload()

    End Sub

End Class
