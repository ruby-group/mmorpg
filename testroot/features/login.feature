Feature: Login
  In order to post content
  Users should be able to login to the site.

@javascript
  Scenario: Login to the site
    Given I am an anonymous user
    And I am at "user/login"
    When I fill in "name" with "admin"
    And I fill in "pass" with "wrong_password"
    Then I should see the message "Sorry, unrecognized username or password"