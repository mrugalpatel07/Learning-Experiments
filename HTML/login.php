<?php
// Check if the form is submitted
if ($_SERVER['REQUEST_METHOD'] === 'POST') {
    // Retrieve form data (username and password)
    $username = $_POST['username'];
    $password = $_POST['password'];

    // Validate credentials (you'll replace this with your actual validation logic)
    if ($username === 'your_username' && $password === 'your_password') {
        // Successful login
        // Redirect to the dashboard or home page
        header('Location: dashboard.php');
        exit;
    } else {
        // Invalid credentials
        $error_message = 'Invalid username or password. Please try again.';
    }
}
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="styles.css"> <!-- Add your CSS file if you have one -->
    <title>Login</title>
</head>
<body>
    <div class="login-container">
        <h1>Gate Pass Management System</h1>
        <form action="login.php" method="post">
            <input type="text" name="username" placeholder="Username" required>
            <input type="password" name="password" placeholder="Password" required>
            <span id="error-message" style="color: red;"><?php echo isset($error_message) ? $error_message : ''; ?></span>
            <button type="submit">Log In</button>
        </form>
    </div>
    <!-- Add any other content or scripts here -->
</body>
</html>
